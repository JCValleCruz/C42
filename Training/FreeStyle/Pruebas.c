/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 11:20:46 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/07/03 14:26:55 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar (char c)
{
	write (1, &c, 1);
}

int	is_power_of_2 (int n)
{
	if (n == 0)
		return (0);
	return (n & (n - 1)) == 0;	
}

int prime (int number)
{
	int i = 1;
	int div = 0;
	while (i <= number)
	{
		if(number % i == 0)
			div++;
		i++;	
		
	}
	if (div == 2)
		return (1);
	
	return (0);
}

const int	ft_atoi(char *str)
{
	int result = 0;
	int sign = 1;
	while (*str == ' ' || *str >= 9 && *str <= 13) 
		str++;
	if (*str == '-')
	{
		sign = -1;
	}
	if (*str == '+' || *str == '-')
	{
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * sign);
}

char	*ft_itoa (int nbr)
{
	if (nbr == -2147483648)
		return ("-2147483648\0");

	int n = nbr;
	int len = 0;
	if (nbr <= 0)
		len++;
	while (n)
	{
		n/= 10;
		len++;
	}
	char *result;
	result = malloc ((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[len] = '\0';

	if (nbr == 0)
	{
		result[0] = '0';
		return (result);
	}
	if (nbr < 0)
	{
		result[0] = '-';
		nbr = -nbr;
	}
	while (nbr)
	{
		result[--len] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (result);			
}

int	plus(char *str)
{
	int result = 0;
	int sign = 1;
	int sum = 0;
	while (*str == ' ' || *str >= 9 && *str <= 13) 
		str++;
	if (*str == '-')
	{
		sign = -1;
	}
	if (*str == '+' || *str == '-')
	{
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		sum = sum + (result % 10);
		sign++;
		str++;
	
	}
	return (sum);
}

void	print_bits (int number)
{
	char digits [] = "01";
	if (number > 1)
		print_bits (number / 2);
	write (1, &digits[number % 2], 1);
}

void	print_hex (int number)
{
	char digits [] = "0123456789abcdef";
	if (number > 15)
		print_hex (number / 16);
	write (1, &digits[number % 16], 1);
}

void	print_number (int number)
{
	char digits [] = "0123456789";
	if (number > 9)
		print_number (number / 10);
	write (1, &digits[number % 10], 1);
}


int main (int argc, char **argv)
{
	int n = ft_atoi(argv[1]);
	int a = ft_atoi(argv[1]);
	int d = plus (argv[1]);
	char *str = ft_itoa(n);

	write (1,"\n",1);
	printf("El numero introducido es:%d\n", n);
	printf("La suma de sus digitos es:%d\n", d);
	printf("Convertido a STR e impreso (itoa):%s\n",str);
	write(1, "En binario es: ",15);
	print_bits(n);
	write(1,"\n",1);
	write(1, "En Hexadecimal es: ",19);
	print_hex(n);
	write(1,"\n",1);
	if (is_power_of_2(n) == 0)
	{
		write (1, "Tu numero es potencia de 2: NO", 30);
		write(1,"\n", 1);
	}
	else
	{
		write (1, "Tu numero es potencia de 2: SI", 30);
		write (1, "\n", 1); 
	}

	if (prime(n) == 0)
	{
		write (1, "Tu numero es primo: NO", 22);
		write(1,"\n", 1);
	}
	else
	{
		write (1, "Tu numero es primo: SI", 22);
		write (1, "\n", 1); 
	}
	return (0);
}