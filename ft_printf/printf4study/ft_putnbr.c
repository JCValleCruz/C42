/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:57:43 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/06/28 14:00:34 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr(int number)
{
	int count = 0;
	char digits[10]= "0123456789";
	if (number > 9)
    {
      count = count + ft_putnbr(number / 10);
    }
	write(1, &digits[number % 10], 1);
	count++;
	return (count);	   
}

/*#include <stdio.h>
int main (void)
{
	int n = ft_putnbr(1200);
	printf ("\n%d\n", n);

	ft_putnbr(1200);
	return 0;
}
*/
