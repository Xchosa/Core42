#include <unistd.h>

char ft_number(int i);

int main()
{
	int i;
	i = 1;
	while (i <= 100 )
	{
		if ((i % 3 == 0 )&& (i % 5  == 0))
		{
			write(1, "fizzbuzz\n", 9);
			i++;
		}
		else if ((i % 3 ) == 0)
		{
			write(1, "fizz\n", 5);
			i++;
		}
		else if ((i % 5 ) == 0)
		{
			write(1, "buzz\n", 5);
			i++;
		}
		else
		{
			ft_number(i);
			i++;
		}
	}
return(0);
}
char ft_number(int i)
{
	int zehner;
	int einer;
	char Number [10] = {'0','1','2','3','4','5','6','7','8','9'};
	if (i / 10 >= 1)
	{
		zehner = i / 10;
		write (1, &Number[zehner], 1);
		einer = i % 10;
		write (1, &Number[einer], 1);
		write (1, "\n",1);
		return (0);
	}
	else 
	{
		write( 1, &Number[i], 1);
		write (1, "\n",1);
		return (0);
	}
	return (0);
}
