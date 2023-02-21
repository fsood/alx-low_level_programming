#include "main.h"
/**
 * print_alphabet_x10 -  prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 */
void print_alphabet_x10(void)
{
int x;
int count;
for (count = 0; count <= 9; count++)
{
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
}
}
