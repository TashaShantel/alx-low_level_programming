#include "main.h"

#include <stdio.h>

/**
 * print_times_table - Prints the times table of the input
 * starting with 0
 * @n: The value of the times table to be printed
 */

void print_times_table(int n)

{

    if (n < 0 || n > 15)
    {
    return;
    }
    for (int i = 0; i <= n; i++)
    {
    for (int j = 0; j <= n; j++) 
    {
    _putchar("%d ", i*j);
    }
    _putchar("\n");
    }
}

