#!/bin/bash

# Path to the executable
EXECUTABLE="./Cpp00/ex00"

# Convert the script to Unix line endings
dos2unix ../cpp00_tester/bash.sh

chmod +x ../cpp00_tester/bash.sh

# Test case 1: Check if the program runs without arguments
echo "Running test case 1: No arguments"
$EXECUTABLE
echo "Exit status: $?"
echo

# Test case 2: Check if the program runs with a sample argument
echo "Running test case 2: Sample argument"
$EXECUTABLE "sample_argument"
echo "Exit status: $?"
echo

# Add more test cases as needed
# ...

echo "All test cases executed."
# Test case 3: Check if the program converts lowercase to uppercase
echo "Running test case 3: Convert lowercase to uppercase"
$EXECUTABLE "shhhhh... I think the students are asleep..."
echo "Exit status: $?"
echo

# Test case 4: Check if the program handles multiple arguments
echo "Running test case 4: Multiple arguments"
$EXECUTABLE "Damnit" " ! " "Sorry students, I thought this thing was off."
echo "Exit status: $?"
echo

# Test case 5: Check if the program runs without any arguments
echo "Running test case 5: No arguments"
$EXECUTABLE
echo "Exit status: $?"
echo