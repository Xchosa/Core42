/*
Write a function that takes a byte, and prints it in binary WITHOUT A NEWLINE
AT THE END.

Your function must be declared as follows:

void	print_bits(unsigned char octet);

Example, if you pass 2 to print_bits, it will print "00000010"

*/

#include <unistd.h>


void	print_bits(unsigned char octet)
{
	unsigned char bytes;
	bytes = 0;
	int i;
	i = 0;

	while (i < 8)
	{
		bytes = (octet >> i) & 1;
		if (bytes)
			write (1, "1", 1);
		else
			write (1, "0", 1);
		i++;
	}
}