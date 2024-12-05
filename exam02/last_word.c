#include <unistd.h>


/*

Write a program that takes a string and displays its last word followed by a \n.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or there are no words, display a newline.

Example:

$> ./last_word "FOR PONY" | cat -e
PONY$
$> ./last_word "this        ...       is sparta, then again, maybe    not" | cat -e
not$
$> ./last_word "   " | cat -e
$
$> ./last_word "a" "b" | cat -e
$
$> ./last_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
*/

void ft_last_word(char *str);

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_last_word(argv[1]);
	}
	write(1, "\n", 1);
	return 0;
}

// int main()
// {
// 	ft_last_word("hello world this");
// 	return 0;
// }
void ft_last_word(char *str)
{
	int b = 0;
	int start;

	while (str[b] != '\0')
	{
		b++;
	}
	b--;
	while (str[b] == ' '  )
		b--;
	int end = b;
	while (( str[b] != ' ' ) && (b >= 0))
	{
		b--;
	}
	b++;
	start = b;

	while(start <= end)
	{
		write(1, &str[start], 1);
		start++;
	}
}