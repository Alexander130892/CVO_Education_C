#!/bin/bash

# Compile all .c files in the current directory
for file in Exercise*.c; do
    if [ -f "$file" ]; then
        echo "Compiling $file..."
        gcc "$file" -o "${file%.c}"
        if [ $? -eq 0 ]; then
            echo "✓ Successfully compiled $file"
        else
            echo "✗ Failed to compile $file"
        fi
    fi
done

echo "Done!"