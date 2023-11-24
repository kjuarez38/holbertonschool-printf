#include "main.h"

/**
 * _print_int - function
 * @arg: argument variable
 * Return: number of characters printed
 */
int _print_int(va_list arg)
{
	int n = va_arg(arg, int);
	int size = 0;
	int sign = 1;
	int digit;

	if (n < 0)
	{
		sign = -1;
		n *= -1;
	}

	if (n == 0)
	{
		putchar('0');
		size++;
	}

	while (n > 0)
	{
		digit = n % 10;
		putchar(digit + '0');
		size++;
		n /= 10;
	}

	if (sign == -1)
	{
		putchar('-');
		size++;
	}

	return (size);
}

