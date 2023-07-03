# Repository Name: alx-low_level_programming

## 0x07-pointers_arrays_strings

### Task List

0. **memset** 
   - Write a function that fills memory with a constant byte.
   - Prototype: `char *_memset(char *s, char b, unsigned int n);`
   - The `_memset()` function fills the first n bytes of the memory area pointed to by s with the constant byte b.
   - Returns a pointer to the memory area s.
   - FYI: The standard library provides a similar function: memset. Run `man memset` to learn more.
   - Sample code available in `0-main.c` and `0-memset.c`.

1. **memcpy** 
   - Write a function that copies memory area.
   - Prototype: `char *_memcpy(char *dest, char *src, unsigned int n);`
   - The `_memcpy()` function copies n bytes from memory area src to memory area dest.
   - Returns a pointer to dest.
   - FYI: The standard library provides a similar function: memcpy. Run `man memcpy` to learn more.
   - Sample code available in `1-main.c` and `1-memcpy.c`.

2. **strchr** 
   - Write a function that locates a character in a string.
   - Prototype: `char *_strchr(char *s, char c);`
   - Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found.
   - FYI: The standard library provides a similar function: strchr. Run `man strchr` to learn more.
   - Sample code available in `2-main.c` and `2-strchr.c`.

3. **strspn** 
   - Write a function that gets the length of a prefix substring.
   - Prototype: `unsigned int _strspn(char *s, char *accept);`
   - Returns the number of bytes in the initial segment of s which consist only of bytes from accept.
   - FYI: The standard library provides a similar function: strspn. Run `man strspn` to learn more.
   - Sample code available in `3-main.c` and `3-strspn.c`.

4. **strpbrk** 
   - Write a function that searches a string for any of a set of bytes.
   - Prototype: `char *_strpbrk(char *s, char *accept);`
   - The `_strpbrk()` function locates the first occurrence in the string s of any of the bytes in the string accept.
   - Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found.
   - FYI: The standard library provides a similar function: strpbrk. Run `man strpbrk` to learn more.
   - Sample code available in `4-main.c` and `4-strpbrk.c`.

5. **strstr** 
   - Write a function that locates a substring.
   - Prototype: `char *_strstr(char *haystack, char *needle);`
   - The `_strstr()` function finds the first occurrence of the substring `needle` in the string `haystack`. The terminating null bytes (`\0`) are not compared.
   - Returns a pointer to the beginning of the located substring, or `NULL` if the substring is not found.
   - Sample code available in `5-main.c` and `5-strstr.c`.

6. **Chess is mental torture** 
   - Write a function that prints the chessboard.
   - Prototype: `void print_chessboard(char (*a)[8]);`
   - Sample code available in `7-main.c` and `7-print_chessboard.c`.

7. **The line of life is a ragged diagonal between duty and desire** 
   - Write a function that prints the sum of the two diagonals of a square matrix of integers.
   - Prototype: `void print_diagsums(int *a, int size);`
   - Format: see example in `8-main.c`.
   - You are allowed to use the standard library.

8. **Double pointer, double fun** (advanced)
   - Write a function that sets the value of a pointer to a char.
   - Prototype: `void set_string(char **s, char *to);`
   - Sample code available in `100-main.c` and `100-set_string.c`.

8. **My primary goal of hacking was the intellectual curiosity, the seduction of adventure** (advanced)
   - Create a file that contains the password for the crackme2 executable.
   - The file should contain the exact password, no new line, no extra space.
   - You may need to use tools like ltrace, ldd, gdb, and objdump to help you.
   - You may also need to install the openssl library and make some changes to the source list on your system (as mentioned in the task description).
   - Sample file available in `101-crackme_password`.

### Getting Started

To compile and run the code for each task, follow these steps:

1. Clone this repository: `git clone <repository-url>`
2. Change to the appropriate directory: `cd alx-low_level_programming/0x07-pointers_arrays_strings`
3. Compile the code using gcc: 
