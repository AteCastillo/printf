#include "holberton.h"
#include <stdio.h>

/**
 * _betty - Function to print
 * @format: Second member
 * @arg: List
 * @types: Pointer
 * Return: _betty
 */

int _betty(const char *format, va_list arg, pt *types)
{
int i = 0, j = 0, flag = 0, total = 0;

while (format[i] != '\0' && format)
{
flag = 0;
if (format[i] == '%')
{
while (types[j].test != '\0')
{
if (format[i + 1] == types[j].test[0])
{
flag = 1;
total += types[j].printer(arg);
break;
}
j++;
}
}
if (flag == 1)
{
if (format[i + 1] == '\0' || format[i + 2] == '\0')
return (total);
i += 2;
}
else
{
write(1, &format[i], 1);
i++;
total++;
}
j = 0;
}
return (total);
}

/**
 * _printf - Function to print
 * @format: Second member
 * Return: printf
 */

int _printf(const char *format, ...)
{
int total = 0;
va_list arg;

pt types[] = {
{"i", print_int},
{"d", print_int},
{"%", print_percent},
{"s", print_string},
{"c", print_char},
{"b", print_binary},
{NULL, NULL}
};

va_start(arg, format);
if (!format)
return (-1);
if (format == NULL || (format[0] == '%' && format[1] == '\0'))
{
return (-1);
}
total = _betty(format, arg, types);
va_end(arg);
return (total);
}
