/*
Assignment name  : fprime
Expected files   : fprime.c
Allowed functions: printf, atoi
--------------------------------------------------------------------------------

Write a program that takes a positive int and displays its prime factors on the
standard output, followed by a newline.

Factors must be displayed in ascending order and separated by '*', so that
the expression in the output gives the right result.

If the number of parameters is not 1, simply display a newline.

The input, when there is one, will be valid.

Examples:

$> ./fprime 225225 | cat -e
3*3*5*5*7*11*13$
$> ./fprime 8333325 | cat -e
3*3*5*5*7*11*13*37$
$> ./fprime 9539 | cat -e
9539$
$> ./fprime 804577 | cat -e
804577$
$> ./fprime 42 | cat -e
2*3*7$
$> ./fprime 1 | cat -e
1$
$> ./fprime | cat -e
$
$> ./fprime 42 21 | cat -e
$
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void fprime(int nbr);
int main(int argc, char **argv)
{
	int nbr;
	if(argc == 2)
	{
		nbr = atoi(argv[1]);
		fprime(nbr);
	}
	write (1, "\n", 1);
}
void fprime(int nbr)
{
	int i;
	i = 2;
	int exit_nbr;
	exit_nbr = 1;
	if (nbr == 1)
		write (1, "1", 1);
	while(i <= nbr)
		if (nbr % i == 0)
		{
			nbr = nbr / i;
			printf("%d", i);
			if (exit_nbr == nbr)
				break;
			printf("%c", '*');
		}
		else
			i++;
}

