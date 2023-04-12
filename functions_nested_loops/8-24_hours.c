#include "main.h"
/*Defines for readability*/
#define LOOP1_MINUTE_MAX 9
#define LOOP2_MINUTE_MAX10 5
#define LOOP3_HOUR_MAX 9
#define LOOP3_DYNAMIC_COUNTER_END 3
#define LOOP4_HOUR_MAX 2
/**
 * jack_bauer - shows the time :)
*/

void jack_bauer(void)
{
	int minute, minute_10, hour, hour_10, loop3_dynamic_counter;
	loop3_dynamic_counter = LOOP3_HOUR_MAX;
	for (hour_10 = 0; hour_10 < 3; hour_10++)
	{	
		if (hour_10 == 2)
			loop3_dynamic_counter = LOOP3_DYNAMIC_COUNTER_END;
		for (hour = 0; hour <= loop3_dynamic_counter; hour++)	
		{
			for (minute_10 = 0; minute_10 <= LOOP2_MINUTE_MAX10; minute_10++)
			{
				for (minute = 0; minute <= LOOP1_MINUTE_MAX; minute++)
				{
					_putchar (hour_10 + '0');
					_putchar (hour + '0');
					_putchar (':');
					_putchar (minute_10 + '0');
					_putchar (minute + '0');
					_putchar ('\n');
				}
			}
		}
	}
}