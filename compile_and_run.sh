#!/bin/bash

# Check if a parameter is provided
if [[ -z $1 ]]; then
    echo "Usage: $0 <program_name>"
    exit 1
fi

# Variables
SOURCE_FILE="$1.c"
OUTPUT_FILE="./exes/$1"

# Compile the C program
gcc -o "$OUTPUT_FILE" "$SOURCE_FILE"
if [[ $? -ne 0 ]]; then
    echo "Compilation failed."
    exit 1
fi

# Run the executable
"$OUTPUT_FILE"
