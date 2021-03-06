#include "holberton.h"
#include <stdio.h>

int _printf(const char *format, ...)
{
  int i = 0, j = 0, flag = 0, total = 0;
  va_list arg;
 
  pt types[] = {
    {"c", print_char},
    {"s", print_string},   
    {NULL, NULL}
  };

  va_start(arg, format);
  if (!format)
    return (-1);
  
  while (format[i] != '\0' && format)
    {  
      flag = 0;
if (format[i] == '%')
    {
      while (types[j].test != '\0')
	{
	  if (format[i + 1] == types[j].test)
	    {
	      flag = 1;	     
 total += types[j].printer(arg);
	    }	
	  j++;
	}
    }
 if (flag == 1)
   {
     if (format[i + 1] == '\0' || format [i + 2] == '\0')
       return (count);
	 i+=2; 
   
   }
     else
       {
	 write(1, &format[i], 1);
	 i++;
	 total++;
       }
     j = 0;
     total++;
   }
 va_end(arg);
   return (total);
}
