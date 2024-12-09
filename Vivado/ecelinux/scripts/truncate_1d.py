import numpy as np
import sys

def read_array(file_path, array_name):
    with open(file_path, 'r') as file:
        lines = file.readlines()

    array = []
    for line in lines:
        if line.strip().startswith('const float ' + array_name) or line.strip().startswith('#include'):
            continue
        elif line.strip().startswith('};'):
            break
        else:
            array.extend(eval("[" + line.strip().strip(',') + "]"))

    return np.array(array)

def truncate_array(array, shape):
    return array[:shape]

def write_array(file_path, array, elem_type, array_name, shape):
    with open(file_path, 'w') as file:
        file.write("#include \"../typedefs.h\"\n")
        file.write("const " + elem_type + " " + array_name + "[" + str(shape) + "] = {\n")
        file.write("    ")
        file.write(", ".join(map(str, array)))
        file.write("\n};\n")

def main():
    array_name = sys.argv[1]
    elem_type = sys.argv[2]
    dim1 = int(sys.argv[3])
    input_file_path = '../data_full/' + array_name + '.h'
    output_file_path = array_name + '.h'
    array = read_array(input_file_path, array_name)
    truncated_array = truncate_array(array, dim1)
    write_array(output_file_path, truncated_array, elem_type, array_name, dim1)

if __name__ == "__main__":
    main()