#include <string.h>
#include "holberton.h"


int print_char(va_list arg)
{
char c;
c = va_arg(arg, int);
  write(1, &c, 1);
  return (1);
}
/**
 * print_float - function to print floats
 * @arg: va_list type
 * Return: always successful
 */

int print_string(va_list arg)
{
  int n = 0;
  char *str;
  str = va_arg(arg, char *);
  if (str == NULL)
    {
      str = "(null)";
	}
  
n = _strlen(str);

  write(1, str, n);
  return (n);
}

int _strlen(char *s)
{
  int b = 0;
  while (*(s + b) != 0)
    {
      b++;
    }
  return (b);
}

/**
 * print_percent - print a percent
 * @args: argument passed
 * Return: the count of element printed
 */

int print_percent(va_list arg)
{
  (void)arg;
  _put_char('%');  
  return (1);
}

  /**
   * print_int - Prints an integer to standard output
   * @args: list of variable argument
   * Return: count of digit in number
   */
  int print_int(va_list args)
  {
    long int number, divisor, count = 0;

    number = va_arg(args, int);

    if (number == 0)
      {
	_putchar('0');
	count = 1;
      }
    else if (number < 0)
      {
	_putchar('-');
	number = -number;
	count = 1;
      }
    if (number > 0)
      {
	for (divisor = 1; divisor <= number; divisor *= 10)
	  ;
	while (divisor > 1)
	  {
	    divisor /= 10;
	    _putchar((number / divisor) +'0');
	    number %= divisor;
	    count++;
	  }
      }
    return (count);
  }
