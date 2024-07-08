#include <unistd.h>

void	ft_putchar (char c)
{
	write (1,&c,1);
}

void	printnumber (int number)
{
	char digits [] = "0123456789";
	if (number > 9)
		printnumber(number / 10);
	write (1, &digits[number % 10],1);
}

int main (int argc, char **argv)
{
	if (argc == 1)
	{
		printnumber(0);
		ft_putchar('\n');
		return (-1);
	}
	int i = 1;
	while (argv[i])
		i++;
	i--;
	printnumber(i);
	ft_putchar('\n');
	return (0);
}	
