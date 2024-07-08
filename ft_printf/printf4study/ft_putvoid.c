/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putvoid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 13:14:37 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/06/28 13:54:23 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int ft_printvoid (unsigned int number)
{
	unsigned long int	count;

	count = 0;
	if (number >= 16)
		count =  count + ft_printvoid(number / 16);
	ft_putchar("0123456789abcdef"[number % 16]);	
	count++;
	return (count);		
}

int	ft_putvoid(unsigned long long number)
{
	unsigned long long	count;
	
	count = 0;
	if (number == 0)
		return (ft_putstr("(nil)"));
	count = ft_putstr("0x");
	count = count + ft_printvoid(number);
	return (count);
}