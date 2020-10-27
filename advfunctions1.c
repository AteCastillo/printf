#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_bin - Converts unsigned int argument to binary
 * @bin: The decimal number to be converted
 *
 * Return: The number of digits printed
 */

int print_binary(va_list bin)
{
  unsigned int number, total = 0, i = 0;
  int arr[100];

  number = va_arg(bin, int);

      while (number > 0)
	{
	  arr[i] = number % 2;
	  number /= 2;
	  i++;
	}
  while (i--)
    {
      _put_char(arr[i] + '0');
      total++;
    }
  return (total);
}
