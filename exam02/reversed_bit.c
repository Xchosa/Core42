
/*
Write a function that takes a byte, reverses it, bit by bit (like the
example) and returns the result.

Your function must be declared as follows:

unsigned char	reverse_bits(unsigned char octet);

Example:

  1 byte
_____________
 0100  0001
     ||
     \/
 1000  0010

*/
#include <stdio.h>
#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char result = 0;
	int i = 0;
	while (i < 8) 
	{
		result = (result << 1 ) | (octet & 1);
		octet >>= 1;
		i++;
	}
	return (result);
}
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

int main()
{
	unsigned char octet = 111;
	unsigned char result;

	result = reverse_bits(octet);

	write(1, "original: ", 10);
	print_bits(octet);
	write(1, "\n", 1);
	// printf("%c\n", octet);

	write(1, "Reversed: ", 10);
    print_bits(result);
    write(1, "\n", 1);


	
	printf("%d\n", octet);
	printf("%d\n", result);
	
}