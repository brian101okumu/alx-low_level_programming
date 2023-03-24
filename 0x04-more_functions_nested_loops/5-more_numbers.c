#include "main.h"

/**
 *  more_numbers - prints numbers between 0 to 14 and repeats then 10 times in a newline
 * Return: no return.
 */
void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 9)
			{
				_putchar(( y / 10) + '0');
			}
			_putchar((y % 10) + '0');
		}
		_putchar('\n');
	}
}
