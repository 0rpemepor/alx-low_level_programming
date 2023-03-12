#!/bin/bash

# Compile all .c files in the current directory into .o files
gcc -c *.c

# Create a static library from all the .o files
ar rcs liball.a *.o

# Remove the .o files
rm *.o

# Print a success message
echo "Static library liball.a created successfully"
