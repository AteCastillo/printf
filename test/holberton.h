#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <unistd.h>
typedef struct pter
{
  char *test;
  void (*printer)();
} pt;

void print_char (va_list arg);
void print_string (va_list arg);
int _printf(const char *format, ...);
int _strlen(char *s);
#endif
