# C++ Secure Password Generator

## Overview
A command-line tool that generates highly secure, randomized passwords. It relies on the C++ `<random>` library to ensure better distribution than standard `rand()` functions, generating strings that combine uppercase, lowercase, numbers, and special characters.

## Features
- Customizable password length.
- Utilizes `std::mt19937` (Mersenne Twister) for robust randomization.
- Output is immediately ready for use.

## Usage
Compile the code:
`g++ main.cpp -o passgen`

Run the program:
`./passgen`
Specify the desired length of the password when prompted (minimum 8 characters is recommended).
