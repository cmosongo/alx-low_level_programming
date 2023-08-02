#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplication of two ints
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if true, 1 if false
 */
int main(int argc, char *argv[])
{
int int1, int2;
if (argc == 3)
{
int1 = atoi(argv[1]);
int2 = atoi(argv[2]);
printf("%d\n", int1 *int2);
return (0);
}
printf("Error\n");
return (1);
}

