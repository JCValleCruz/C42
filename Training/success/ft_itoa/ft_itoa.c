/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 13:57:35 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/07/05 14:17:06 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa (int nbr)
{
	if (nbr == -2147483648)
		return ("-2147483648");
		
	int len = 0;
	int n = nbr;
	char *result;
	
	if (nbr <= 0)
		len++;
	while (nbr)
	{
		nbr = nbr / 10;
		len++;
	}
	result = malloc(len + 1);
	if(!result)
		return NULL;
	result[len] = '\0';
		
	if (n == 0)
	{
		result[0] = '0';
		return (result);
	}
	if (n < 0)
	{
		result[0] = '-';
		n = n * -1;
	}
	while (n)
	{
		result[--len] = (n % 10) + '0';
		n = n / 10;
	}
	return (result);				
}
