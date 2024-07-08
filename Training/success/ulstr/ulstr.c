#include <unistd.h>

void	ft_putchar(char c)
{
	write (1,&c,1);
}

void	ulstr(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		ft_putchar(str[i]);
		i++;
	}
}

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return (-1);
	}
	ulstr(argv[1]);
	ft_putchar('\n');
	return 0;
}
