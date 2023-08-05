#include "main.h"

/**
 * debug_1 - print debug statements
 *
 * @n: value of n
 * @length: length of n
 * @mask: mask of n
 *
 * Return: nothing
 */
void debug_1(unsigned long int n, int length, unsigned long int mask)
{
	_putchar('L');
	_putchar('e');
	_putchar('n');
	_putchar('g');
	_putchar('t');
	_putchar('h');
	_putchar(' ');
	_putchar('o');
	_putchar('f');
	_putchar(' ');
	_putchar(n + '0');
	_putchar(' ');
	_putchar('(');
	_putchar('n');
	_putchar(')');
	_putchar(' ');
	_putchar('i');
	_putchar('s');
	_putchar(' ');
	_putchar(length + '0');
	_putchar(' ');
	_putchar('a');
	_putchar('n');
	_putchar('d');
	_putchar(' ');
	_putchar('m');
	_putchar('a');
	_putchar('s');
	_putchar('k');
	_putchar(' ');
	_putchar('(');
	_putchar('o');
	_putchar('r');
	_putchar('i');
	_putchar('g');
	_putchar('i');
	_putchar('n');
	_putchar('a');
	_putchar('l');
	_putchar(' ');
	_putchar('v');
	_putchar('a');
	_putchar('l');
	_putchar('u');
	_putchar('e');
	_putchar(' ');
	_putchar('1');
	_putchar(')');
	_putchar(' ');
	_putchar('i');
	_putchar('s');
	_putchar(' ');
	_putchar(mask + '0');
	_putchar(' ');
	_putchar('b');
	_putchar('a');
	_putchar('s');
	_putchar('e');
	_putchar('d');
	_putchar(' ');
	_putchar('o');
	_putchar('n');
	_putchar(' ');
	_putchar('[');
	_putchar('l');
	_putchar('e');
	_putchar('n');
	_putchar('g');
	_putchar('t');
	_putchar('h');
	_putchar(' ');
	_putchar('o');
	_putchar('f');
	_putchar(' ');
	_putchar('n');
	_putchar(' ');
	_putchar('-');
	_putchar(' ');
	_putchar('1');
	_putchar(']');
	_putchar('.');
	_putchar('\n');
	_putchar('\n');
}

/**
 * debug_2 - print debug statements
 *
 * @n: value of n
 * @mask: mask of n
 *
 * Return: nothing
 */
void debug_2(unsigned long int n, unsigned long int mask)
{
	_putchar('V');
	_putchar('a');
	_putchar('l');
	_putchar('u');
	_putchar('e');
	_putchar(' ');
	_putchar('o');
	_putchar('f');
	_putchar(' ');
	_putchar('n');
	_putchar(' ');
	_putchar('i');
	_putchar('s');
	_putchar(' ');
	_putchar(n + '0');
	_putchar(',');
	_putchar(' ');
	_putchar('v');
	_putchar('a');
	_putchar('l');
	_putchar('u');
	_putchar('e');
	_putchar(' ');
	_putchar('o');
	_putchar('f');
	_putchar(' ');
	_putchar('m');
	_putchar('a');
	_putchar('s');
	_putchar('k');
	_putchar(' ');
	_putchar('i');
	_putchar('s');
	_putchar(' ');
	_putchar(mask + '0');
	_putchar(' ');
	_putchar('a');
	_putchar('n');
	_putchar('d');
	_putchar(' ');
	_putchar('v');
	_putchar('a');
	_putchar('l');
	_putchar('u');
	_putchar('e');
	_putchar(' ');
	_putchar('o');
	_putchar('f');
	_putchar(' ');
	_putchar('[');
	_putchar('n');
	_putchar(' ');
	_putchar('&');
	_putchar(' ');
	_putchar('m');
	_putchar('a');
	_putchar('s');
	_putchar('k');
	_putchar(']');
	_putchar(' ');
	_putchar('=');
	_putchar(' ');
	_putchar(n & mask + '0');
	_putchar('.');
	_putchar('\n');
	_putchar('\n');
}

/**
 * debug_3 - print debug statements
 *
 * @mask: mask of value n
 *
 * Return: nothing
 */
void debug_3(unsigned long int mask)
{
	_putchar('\n');
	_putchar('V');
	_putchar('a');
	_putchar('l');
	_putchar('u');
	_putchar('e');
	_putchar(' ');
	_putchar('o');
	_putchar('f');
	_putchar(' ');
	_putchar('m');
	_putchar('a');
	_putchar('s');
	_putchar('k');
	_putchar(' ');
	_putchar('i');
	_putchar('s');
	_putchar(' ');
	_putchar(mask + '0');
	_putchar(' ');
	_putchar('a');
	_putchar('f');
	_putchar('t');
	_putchar('e');
	_putchar('r');
	_putchar(' ');
	_putchar('r');
	_putchar('i');
	_putchar('g');
	_putchar('h');
	_putchar('t');
	_putchar(' ');
	_putchar('s');
	_putchar('h');
	_putchar('i');
	_putchar('f');
	_putchar('t');
	_putchar('i');
	_putchar('n');
	_putchar('g');
	_putchar(' ');
	_putchar('b');
	_putchar('y');
	_putchar(' ');
	_putchar('o');
	_putchar('n');
	_putchar('e');
	_putchar('.');
	_putchar('\n');
	_putchar('\n');
}

/**
 * _length - find the length of @n
 *
 * @n: value to find its length
 *
 * Return: length
 */
int _length(unsigned long int n)
{
	int length = 0;

	while (n > 0)
	{
		#ifdef DEBUG
		_putchar('V');
		_putchar('a');
		_putchar('l');
		_putchar('u');
		_putchar('e');
		_putchar(' ');
		_putchar('o');
		_putchar('f');
		_putchar(' ');
		_putchar('n');
		_putchar(' ');
		_putchar('i');
		_putchar('s');
		_putchar(' ');
		_putchar(n + '0');
		_putchar(' ');
		_putchar('b');
		_putchar('e');
		_putchar('f');
		_putchar('o');
		_putchar('r');
		_putchar('e');
		_putchar(' ');
		_putchar('r');
		_putchar('i');
		_putchar('g');
		_putchar('h');
		_putchar('t');
		_putchar(' ');
		_putchar('s');
		_putchar('h');
		_putchar('i');
		_putchar('f');
		_putchar('t');
		_putchar('i');
		_putchar('n');
		_putchar('g');
		_putchar(' ');
		_putchar('b');
		_putchar('y');
		_putchar(' ');
		_putchar('o');
		_putchar('n');
		_putchar('e');
		_putchar('.');
		_putchar('\n');
		#endif

		length++;
		n >>= 1; /* shift n to the right by 1 */

		#ifdef DEBUG
		_putchar('V');
		_putchar('a');
		_putchar('l');
		_putchar('u');
		_putchar('e');
		_putchar(' ');
		_putchar('o');
		_putchar('f');
		_putchar(' ');
		_putchar('n');
		_putchar(' ');
		_putchar('a');
		_putchar('f');
		_putchar('t');
		_putchar('e');
		_putchar('r');
		_putchar(' ');
		_putchar('r');
		_putchar('i');
		_putchar('g');
		_putchar('h');
		_putchar('t');
		_putchar(' ');
		_putchar('s');
		_putchar('h');
		_putchar('i');
		_putchar('f');
		_putchar('t');
		_putchar('i');
		_putchar('n');
		_putchar('g');
		_putchar(' ');
		_putchar('b');
		_putchar('y');
		_putchar(' ');
		_putchar('o');
		_putchar('n');
		_putchar('e');
		_putchar('.');
		_putchar('\n');
		#endif
	}

	length--;

	return (length);
}

/**
 * print_binary - a function that converts a decimal to binary
 *
 * @n: decimal number to convert
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int length;
	unsigned long int mask = 1;

	length = _length(n);

	if (length > 0) /* create mask based on length of number */
		mask <<= length; /* shift mask to the left by length */

	#ifdef DEBUG
	debug_1(n, length, mask);
	#endif

	while (mask > 0)
	{
		#ifdef DEBUG
		debug_2(n, mask);
		#endif

		if (n & mask) /* if n & mask == 1 print 1 */
			_putchar('1');
		else /* else if n & mask == 0 print 0 */
			_putchar('0');

		mask >>= 1; /* shift mask to the right by 1 */

		#ifdef DEBUG
		debug_3(mask);
		#endif
	}
}


