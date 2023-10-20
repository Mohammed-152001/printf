#include "main.h"

/**
 * printf_char - ptints a char.
 * @val: arguments.
 * Return: 1.
 */
int printf_char(va_list val)
{
	char str;

	str = va_arg(val, int);
	_putcher(str);
	return (1);
}
