#!/bin/bash

# List of subdirectories to process
subdirs=("data_4th" "data_16th" "data_64th" "data_full")

# Loop through each subdirectory
for subdir in "${subdirs[@]}"; do
    # Check if the subdirectory exists
    if [ -d "$subdir" ]; then
        # Loop through each file in the subdirectory
        for file in "$subdir"/*; do
            # Check if the file is a regular file
            if [ -f "$file" ]; then
                # Replace each instance of "attn_fixed_t" with "float"
                sed -i 's/attn_fixed_t/float/g' "$file"
                
                # Check if "#include <stdint.h>" is already in the file
                if ! grep -q '#include <stdint.h>' "$file"; then
                    # Add "#include <stdint.h>" to the top of the file
                    sed -i '1i#include <stdint.h>' "$file"
                fi

                # Remove any lines containing "#include "../typedefs.h""
                sed -i '/#include "..\/typedefs.h"/d' "$file"
            fi
        done
    else
        echo "Directory $subdir does not exist."
    fi
done

echo "Replacement, inclusion, and removal completed."