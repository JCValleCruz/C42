/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 13:19:58 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/06/21 13:29:16 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa (int nbr)
{
	if (nbr == -21447483648)
		return ("-21447483648\0");

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
		result[len--] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (result);			
}