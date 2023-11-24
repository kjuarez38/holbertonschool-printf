#include "main.h"

/**
 *_print_int - function
 *@arg: argument variable
 *Return: size
 *
 */
int _print_int(va_list arg)
{
	int n = va_arg(arg, int);
	int r = 0;
	int size = 0;
	int i = 0;
	int arr[20];


	if (n == 0)
	{
		_putchar('0' + 0);
		size += 1;
	}
	if (n < 0)
	{
		_putchar('-');
		size += 1;
	}
	while (n != 0)
	{
		r = n % 10;
		n = n / 10;
		i++;
		if (r < 0)
			r = r * -1;
		arr[i] = r;
		size++;
	}

	while (i > 0)
		_putchar('0' + arr[i--]);

	return (size);
}
