#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - convert a string to integer
 * @s: input
 * Return: 0
 */


int _atoi(char *s)
{
	int i;

	s = "4";
	s1 = "10";
	s2 = "-3";
	s3 = "99";
	s4 = "-40";
	s5 = " ------++++++-----+++++--98";
	s6 = "Hello ----- world\n";
	s7 = "+++++ +-+ 2242454";
	s8 = "2147483647";
	s9 = " + + - -98 Battery Street; San Francisco, CA 94111 - USA ";
	s10 = "---++++ -++ Sui - te - 402 #cisfun :)";
	s11 = "";
	s12 = "-2147483648";
	i = atoi(s,s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12);

	printf("%d\n", i);
	
	

	return 0;
}
