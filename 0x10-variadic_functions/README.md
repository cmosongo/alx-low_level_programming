# Variadic Functions

This repository contains C programs that demonstrate the use of variadic functions. Variadic functions allow you to define functions that can accept a variable number of arguments. In this repository, we have implemented several functions that showcase the versatility of variadic functions.


0. **Summing Up Parameters**
   - File: `0-sum_them_all.c`
   - Function Prototype: `int sum_them_all(const unsigned int n, ...)`
   - Description: This function calculates the sum of all its parameters.

1. **Printing Numbers**
   - File: `1-print_numbers.c`
   - Function Prototype: `void print_numbers(const char *separator, const unsigned int n, ...)`
   - Description: This function prints numbers, separated by the specified separator.

2. **Printing Strings**
   - File: `2-print_strings.c`
   - Function Prototype: `void print_strings(const char *separator, const unsigned int n, ...)`
   - Description: This function prints strings, separated by the specified separator. If a string is NULL, it prints (nil) instead.

3. **Printing Anything**
   - File: `3-print_all.c`
   - Function Prototype: `void print_all(const char * const format, ...)`
   - Description: This function prints anything based on the provided format. Supported format characters: c (char), i (integer), f (float), s (char*).

## How to Run

Follow the steps below to compile and run the C programs:

1. Compile the programs using `gcc`:

