#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int printf(const char *format, ...)
{
        /* tr to print this
         * line of code
         * */
	write(1, "9 8 10 24 75 - 9\n", 17);
	write(1, "Congratulations, you win the Jackpot!",37);
	exit(EXIT_SUCCESS);

}
