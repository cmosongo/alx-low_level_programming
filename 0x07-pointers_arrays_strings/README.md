# Repository Name: alx-low_level_programming

## 0x07-pointers_arrays_strings

### Task List

1. **memset** (mandatory)
   - Write a function that fills memory with a constant byte.
   - Prototype: `char *_memset(char *s, char b, unsigned int n);`
   - The `_memset()` function fills the first n bytes of the memory area pointed to by s with the constant byte b.
   - Returns a pointer to the memory area s.
   - FYI: The standard library provides a similar function: memset. Run `man memset` to learn more.
   - Sample code available in `0-main.c` and `0-memset.c`.

2. **memcpy** (mandatory)
   - Write a function that copies memory area.
   - Prototype: `char *_memcpy(char *dest, char *src, unsigned int n);`
   - The `_memcpy()` function copies n bytes from memory area src to memory area dest.
   - Returns a pointer to dest.
   - FYI: The standard library provides a similar function: memcpy. Run `man memcpy` to learn more.
   - Sample code available in `1-main.c` and `1-memcpy.c`.

3. **strchr** (mandatory)
   - Write a function that locates a character in a string.
   - Prototype: `char *_strchr(char *s, char c);`
   - Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found.
   - FYI: The standard library provides a similar function: strchr. Run `man strchr` to learn more.
   - Sample code available in `2-main.c` and `2-strchr.c`.

4. **strspn** (mandatory)
   - Write a function that gets the length of a prefix substring.
   - Prototype: `unsigned int _strspn(char *s, char *accept);`
   - Returns the number of bytes in the initial segment of s which consist only of bytes from accept.
   - FYI: The standard library provides a similar function: strspn. Run `man strspn` to learn more.
   - Sample code available in `3-main.c` and `3-strspn.c`.

5. **strpbrk** (mandatory)
   - Write a function that searches a string for any of a set of bytes.
   - Prototype: `char *_strpbrk(char *s, char *accept);`
   - The `_strpbrk()` function locates the first occurrence in the string s of any of the bytes in the string accept.
   - Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found.
   - FYI: The standard library provides a similar function: strpbrk. Run `man strpbrk` to learn more.
   - Sample code available in `4-main.c` and `4-strpbrk.c`.

### Getting Started
To compile and run the code for each task, follow these steps:

1. Clone this repository: `git clone <repository-url>`
2. Change to the appropriate directory: `cd alx-low_level_programming/0x07-pointers_arrays_strings`
3. Compile the code using gcc: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <main-file.c> <task-file.c> -o <output-name>`
4. Run the executable: `./<output-name ago. 

---

## Getting Started

To compile the programs, you can use the `gcc` compiler with the following flags:


