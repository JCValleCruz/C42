#include <unistd.h>

int	ft_atoi (char *str)
{
	int sign = 1;
	int result = 0;
	
	while (*str == ' ' || *str >= 9 && *str <= 13)
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (sign * result);
}

void	print_hex (int number)
{
	char digits[] = "0123456789abcdef";
	if (number > 15)
		print_hex(number/16);
	write(1,&digits[number % 16],1);
}

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		write(1,"\n",1);
		return (-1);
	}
	int n = ft_atoi(argv[1]);
	print_hex(n);
	write (1,"\n",1);
	return 0;
}
