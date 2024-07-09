/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addprime.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 18:46:32 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/07/09 19:09:43 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar (char c)
{
	write(1, &c, 1);
}

void	ft_putnbr (int number)
{
	char digits[] = "0123456789";
	if (number > 9)
		ft_putnbr(number / 10);
	write(1, &digits[number % 10],1);	
}

int		ft_atoi (char *str)
{
	int result = 0;
	int sign = 1;
	while (*str == ' ' || *str >= 9 && *str <= 13)
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while(*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (sign * result);			
}

int		checkprime (int number)
{
	int i = 1;
	int check = 0;
	while (i <= number)
	{
		if(number % i == 0)
		{
			check++;
		}
		i++;
	}

	if (check == 2)
		return (1);
	else
		return (0);	
}

int	add_prime_sum (int number)
{
	int i = 0;
	int suma = 0;
	while (i <= number)
	{
		if (checkprime(i) == 1)
			suma = suma + i;
		
		i++;
	}
	return (suma);
}

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return (-1);
	}
	int n = ft_atoi(argv[1]);
	int result = add_prime_sum(n);
	ft_putnbr(result);
	ft_putchar('\n');
	return 0;
}