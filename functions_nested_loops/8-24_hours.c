#include "main.h"

/**
 * jack_bauer - will print the general time of day jack bauer.
 * Description:the ten hour, hour unit, minutes and seconds are set
 * Return: Hours, minutes and seconds
 */

void jack_bauer(void)
{
	int decenah, undh, min, seg;

	for (decenah = 0 ; decenah <= 2 ; decenah++)
	{
	for (undh = 0 ; undh <= 9 ; undh++)
	{
	if ((decenah <= 1 && undh <= 9) || (decenah <= 2 && undh <= 3))
	{
	for (min = 0 ; min <= 5 ; min++)
	{
	for (seg = 0 ; seg <= 9 ; seg++)
	{

		_putchar(decenah + '0');
		_putchar(undh + '0');
		_putchar(58);
		_putchar(min + '0');
		_putchar(seg + '0');
		_putchar('\n');
	}
	}
	}
	}
	}
}
