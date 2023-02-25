#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: 0 (success)
 */

int main(void)

{
int d, p;

for (d = '0'; d <= '9'; d++)
{
putchar(d);
for (p = d + 1; p <= '9'; p++)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
