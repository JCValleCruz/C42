#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar (char c)
{
	write (1, &c, 1);
}

int	ft_doop(char *s1, char *o, char *s2)
{
	int i;
	int c;
	int result;

	i = atoi(s1);
	c = atoi(s2);

	if (o[0] == '*')
	{
		result = i * c;
	}
	if (o[0] == '/')
	{
		result = i / c;
	}
	if (o[0] == '+')
	{
		result = i + c;
	}
	if (o[0] == '-')
	{
		result = i - c;
	}	
	if (o[0] == '%')
	{
		result = i % c;
	}
	return (result);
}

int main (int argc, char **argv)
{
	int result;
	char o = argv[2][0];
	if (argc != 4)
	{
		ft_putchar('\n');
		return (1);
	}
	
	result = ft_doop(argv[1],argv[2],argv[3]);
	printf("%d\n", result);
	return (0);
}