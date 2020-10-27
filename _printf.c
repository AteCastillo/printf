#include "holberton.h"
#include <stdio.h>

/**
 * _printf - Function to print
 * @format: Second member
 * Description: Longer description
 */


int _printf(const char *format, ...)
{
int i = 0, j = 0, flag = 0, total = 0;
va_list arg;
pt types[] = {
{"i", print_int},
{"d", print_int},
{"%", print_percent},
{"c", print_char},
{"s", print_string},
{NULL, NULL}
};
va_start(arg, format);
if (!format)
return (-1);
if (format == NULL || (format[0] == '%' && format[1] == '\0'))
{
return (-1);
}
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
va_end(arg);
return (total);
}
