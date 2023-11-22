#include "main.h"

/**
 * _function_type - check the code
 * @chara: char
 * @avar: va_list
 * Return: Number of character print
 */

int _function_type(char chara, va_list avar)
{
	formats list[] = {
		{"c", _print_char},
		{"s", _print_arg_string},
		{"d", _print_int},
		{"i", _print_int},
		{NULL, NULL}
	};

	int i = 0;

	while (list[i].t != NULL)
	{
		if (*list[i].t == chara)
		{
			if (*(list[i] + 1) == 'd' || *(list[i] + 1) == 'i')
			{
				return (_print_int(avar));
			}
			else
			{
				return (list[i].f(avar));
			}
		}
		i++;
	}

	if (chara == '%')
	{
		return (_putchar('%'));
	}
	else
	{
		_putchar('%');
		_putchar(c);
		return (2);
	}
}
