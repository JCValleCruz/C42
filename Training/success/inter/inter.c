#include <unistd.h>

void	ft_putchar(char c)
{
	write(1,&c,1);
}

int	check (char *str, int c)
{
	int i = 0;
	while (i < c)
	{
		if (str[i] == str[c])
			return 1;
		i++;
	}
	return 0;
}

void	inter(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while(s1[i] != '\0')
	{
		while(s2[j]!='\0')
		{
			if (s1[i] == s2[j] && check(s1,i) == 0)
			{
				ft_putchar(s1[i]);
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
}

int main (int argc, char **argv)
{
	if (argc != 3)
	{
		ft_putchar('\n');
		return (-1);
	}
	inter (argv[1], argv[2]);
	ft_putchar('\n');
	return 0;
}		
