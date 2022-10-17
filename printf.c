#include "main.h"

#undef printf

/*
 * _printf - Copy of printf function
 *
 * @format: format of text
 *
 * Return: Done error -1
 */

int _printf(const char *format, ...)
{
	va_list arg;
	int done;

	va_start(arg, format);
	done = vfprintf(stdout, format, arg);
	va_end(arg);

	return (done);
}

