#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <unistd.h>
typedef struct pter
{
  char *test;
  int (*printer)();
} pt;

int print_char (va_list arg);
int print_string (va_list arg);
int _printf(const char *format, ...);
int _strlen(char *s);
#endif
