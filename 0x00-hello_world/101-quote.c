#include <unistd.h>
#define MESSAGE "and that piece of art is useful\" - Dora Korpar, 2015-10-19"

/**
 * main - Entry point
 * printf alternative
 * Return: Always 1 (Success)
 */
int main(void)
{
write(2, MESSAGE, sizeof(MESSAGE) - 1);
return (1);
}
