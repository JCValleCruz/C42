/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoibase.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 12:46:11 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/07/04 13:16:35 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoibase (char *str, int base)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	if (str[i] == '-' || str[i] == '+')									// Gestionamos el signo del str.
	{
		if (str[i] == '-')
		{
			sign = -1;
		}
		i++;
	}
	
	while (str[i] >= '0' && str[i] <= '9' || str[i] >= 'a' && str[i] <= 'f' || str[i] >= 'A' && str[i] <= 'F')
	{
		if (str[i] >= '0' && str[i] <= '9')
			result = result * base + str[i] - '0';
		if (str[i] >= 'a' && str[i] <= 'f')
			result = result * base + ((str[i] - 'a') + 10);
		if (str[i] >= 'A' && str[i] <= 'F')
			result = result * base + ((str[i] - 'A') + 10);

		i++;	
	}
	return (result * sign);
}

int main (void)
{
	char *str2 = "ff";				// 255 
	int base2 = 16;
	
	char *str = "100";				//4
	int base = 2;
	printf("%d\n", ft_atoibase(str, base));
	return (0);
}
