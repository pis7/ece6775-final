import numpy as np
import sys

def read_array(file_path, array_name):
    with open(file_path, 'r') as file:
        lines = file.readlines()

    array = []
    current_array = []
    for line in lines:
        if line.strip().startswith('{') and (line.strip().endswith('},') or line.strip().endswith('}')):
            current_array.append(eval(line.strip().strip(',').replace('{', '[').replace('}', ']')))
        elif line.strip().startswith('},'):
            array.append(current_array)
            current_array = []
        elif line.strip().startswith('const float ' + array_name):
            continue
        elif line.strip().startswith('};'):
            break

    return np.array(array)

def truncate_array(array, shape):
    return array[:shape[0], :shape[1], :shape[2]]

def write_array(file_path, array, elem_type, array_name, shape):
    with open(file_path, 'w') as file:
        file.write("#include \"../typedefs.h\"\n")
        file.write("const " + elem_type + " " + array_name + "[" + str(shape[0]) + "][" + str(shape[1]) + "][" + str(shape[2]) + "] = {\n")
        for i in range(array.shape[0]):
            file.write("    {\n")
            for j in range(array.shape[1]):
                file.write("        {")
                file.write(", ".join(map(str, array[i][j])))
                if (j != array.shape[1] - 1):
                    file.write("},\n")
                else:
                    file.write("}\n")
            if (i != array.shape[0] - 1):
                file.write("    },\n")
            else:
                file.write("    }\n")
        file.write("};\n")

def main():
    array_name = sys.argv[1]
    elem_type = sys.argv[2]
    dim1 = int(sys.argv[3])
    dim2 = int(sys.argv[4])
    dim3 = int(sys.argv[5])
    input_file_path = array_name + '.h'
    output_file_path = 'truncated_' + array_name + '.h'
    array = read_array(input_file_path, array_name)
    truncated_array = truncate_array(array, (dim1, dim2, dim3))
    write_array(output_file_path, truncated_array, elem_type, array_name, (dim1, dim2, dim3))

if __name__ == "__main__":
    main()