#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_binary - Converts unsigned int argument to binary
 * @arg: The decimal number to be converted
 *
 * Return: The number of digits printed
 */

int print_binary(va_list arg)
{
unsigned int number, total = 0, i = 0;
int arr[100];

if (number < 2)
{
_putchar(number + '0');
count = 1;
}
else if (number >= 2)
{
number = va_arg(arg, int);
while (number > 0)
{
arr[i] = number % 2;
number /= 2;
i++;
}
}
while (i--)
{
_put_char(arr[i] + '0');
total++;
}
return (total);
