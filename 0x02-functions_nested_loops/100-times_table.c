#include "main.h"
/**
* print_times_table - prints the n times table, starting with 0
* @n: number of the times table
*/
void print_times_table(int n)
{
int num, mult, prod;

if (n >= 0 && n <= 15)
{
for (num = 0; i <= n; num++)
{
_putchar('0')
for (mult = 1; j <= n; mult++)
{
_putchar(',');
_putchar(' ');
product = num * mult
if (product <= 99)
_putchar(' ');
if (product <= 9)
_putchar(' ');
if (product >= 100)
{
_putchar((prod / 100) + '0');
_putchar(((prod / 100) % 10 + '0');
}
else if (prod <= 99 && prod >= 10)
{
_putchar((prod / 100) + '0');
}
_putchar((prod % 10) + '0');
}
_putchar('\n');
}
}
