#include <unistd.h>

void	ft_putchar (char c)
{
	write (1, &c, 1);
}

void	rot_13 (char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
		{
			str[i] = str[i] + 13;
		}
		else if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
		{
			str[i] = str[i] - 13;
		}
		ft_putchar (str[i]);
		i++;
	}
}

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar ('\n');
		return (-1);
	}
	rot_13(argv[1]);
	ft_putchar('\n');
	return (0);
}
