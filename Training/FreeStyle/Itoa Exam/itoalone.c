/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoalone.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 13:30:11 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/06/21 13:44:59 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa (long int nbr)
{
	if (nbr == -2147483648)
		return ("-2147483648\0");

	int n = nbr;
	int len = 0;
	
	if (n <= 0)
		len++;

	while (n)
	{
		n /= 10;
		len++;
	}
	char *result = malloc ((len + 1) * sizeof(char));
	if (!result)
		return NULL;	
	
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

int main (int argc, char **argv)
{
	char *result = ft_itoa(2147483647);
	printf("Tu año de nacimiento es el:%s\n",result);
	return 0;
}