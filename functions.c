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
  if (s == NULL)
    {
      s = "(null)"
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
