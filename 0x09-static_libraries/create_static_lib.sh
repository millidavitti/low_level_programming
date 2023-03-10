#!/bin/bash

# Create a static library called liball.a from all the .c files in the current directory.

# Compile all the .c files into object files.
gcc -c *.c

# Create the static library.
ar rcs liball.a *.o

# Clean up the object files.
rm *.o

# Print a message indicating that the library has been created.
echo "Static library liball.a has been created."
