/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 12:57:47 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/06/28 13:26:35 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int ft_countsdigituns(long int number)
{
	int digits;

	digits = 0;
	if (number == 0)
		return (1);
	while (number != 0)
	{
		number /= 10;
		digits++;
	}
	return (digits);	
}

int ft_putnbr_unsigned (unsigned int number)
{
	char		*result;
	int			digits;
	long int	nbr;

	nbr = number;
	digits = ft_countsdigituns(number);
	result = malloc (digits + 1);
	if (!result)
		return (0);
	result [digits] = '\0';
	while (digits--)
	{
		result[digits] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	number = ft_putstr(result);
	free (result);
	return (number);		
}
