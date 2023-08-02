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

/*Declaring variables*/
int cnt = 0;

if (argc > 0)
{
/*WHILE - Print each arguments*/
while (cnt < argc)
{
printf("%s\n", argv[cnt]);
cnt++;
}
}
return (0);
}

