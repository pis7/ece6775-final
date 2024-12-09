#ifndef SAVE_VECTOR_TO_ARRAY_H
#define SAVE_VECTOR_TO_ARRAY_H

#include "src_c/bitnet.h"
#include <iomanip>  // Include for std::setprecision

void save3DVectorToHeader(const std::vector<std::vector<std::vector<float>>> &input, const std::string &filename, const std::string &array_name) {
    std::ofstream outFile(filename);
    if (!outFile.is_open()) {
        std::cerr << "Error: Could not open file " << filename << " for writing." << std::endl;
        return;
    }

    outFile << std::setprecision(12) << std::fixed;

    // Write the array definition
    outFile << "#include \"../typedefs.h\"\n\n";
    outFile << "const fixed32_t " << array_name << "[" << input.size() << "][" << input[0].size() << "][" << input[0][0].size() << "] = {\n";

    // Iterate through the 3D vector and write the values in the correct format
    for (size_t i = 0; i < input.size(); ++i) {
        outFile << "    {\n";
        for (size_t j = 0; j < input[i].size(); ++j) {
            outFile << "        {";
            for (size_t k = 0; k < input[i][j].size(); ++k) {
                outFile << input[i][j][k];
                if (k < input[i][j].size() - 1) {
                    outFile << ", ";
                }
            }
            outFile << "}";
            if (j < input[i].size() - 1) {
                outFile << ",";
            }
            outFile << "\n";
        }
        outFile << "    }";
        if (i < input.size() - 1) {
            outFile << ",";
        }
        outFile << "\n";
    }

    outFile << "};\n\n";

    outFile.close();
}


// Save 2D vector to header file
template <typename T>
void save2DVectorToHeader(const std::vector<std::vector<T>> &vec, const float scale, bool quantize, const std::string &filename, const std::string &array_name) {
    std::ofstream outFile(filename);
    if (!outFile.is_open()) {
        std::cerr << "Error: Could not open file " << filename << " for writing." << std::endl;
        return;
    }

    if constexpr (std::is_same<T, float>::value) {
        if (quantize) {
            std::cerr << "Error: Cannot quantize float data type." << std::endl;
            return;
        }
    } else if constexpr (std::is_same<T, uint8_t>::value) {
        if (!quantize) {
            std::cerr << "Error: Cannot save uint8_t data type as float." << std::endl;
            return;
        }
    } else {
        std::cerr << "Error: Unsupported data type." << std::endl;
    }

    outFile << std::setprecision(12) << std::fixed;

    if (quantize) {
        outFile << "#include \"../typedefs.h\"\n\n";
        outFile << "const fixed32_t scale = " << scale << ";\n\n";
    }

    // Write the array definition
    outFile << "const " << (quantize ? "bit8_t" : "fixed32_t") << " " << array_name << "[" << vec.size() << "][" << vec[0].size() << "] = {\n";

    for (size_t i = 0; i < vec.size(); ++i) {
        outFile << "    {";
        for (size_t j = 0; j < vec[i].size(); ++j) {
            if constexpr (std::is_same<T, uint8_t>::value) {
                // Cast uint8_t to int to avoid saving it as a char
                outFile << static_cast<int>(vec[i][j]);
            } else {
                outFile << vec[i][j];
            }
            if (j < vec[i].size() - 1) {
                outFile << ", ";
            }
        }
        outFile << "}";
        if (i < vec.size() - 1) {
            outFile << ",";
        }
        outFile << "\n";
    }


    outFile << "};\n\n";

    outFile.close();
}



// Save 1D vector to header file
void save1DVectorToHeader(const std::vector<float> &vec, const std::string &filename, const std::string &array_name) {
    std::ofstream outFile(filename);
    if (!outFile.is_open()) {
        std::cerr << "Error: Could not open file " << filename << " for writing." << std::endl;
        return;
    }

    outFile << std::setprecision(12) << std::fixed;

    // Write the array definition
    outFile << "const fixed32_t " << array_name << "[" << vec.size() << "] = {";

    for (size_t i = 0; i < vec.size(); ++i) {
        outFile << vec[i];
        if (i < vec.size() - 1) {
            outFile << ", ";
        }
    }
    outFile << "};\n\n";

    outFile.close();
}

#endif