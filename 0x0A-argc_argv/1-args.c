#include <stdio.h>
#include "main.h"

/**
 * main - Print program name
 * @argc: arguments count
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv;
printf("%i\n", argc - 1);

return (0);
}

