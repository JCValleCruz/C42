/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:39:12 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/07/08 17:53:07 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar (char c)
{
	write (1, &c, 1);
}

void	alphamirror (char *str)
{
	int i = 0;
	int calc = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'm')
		{
			calc = 25 - 2 * (str[i] - 'a');
			str[i] = str[i] + calc;
		}
		else if (str[i] >= 'A' && str[i] <= 'M')
		{
			calc = 25 - 2 * (str[i] - 'A');
			str[i] = str[i] + calc;
		}
		else if (str[i] >= 'n' && str[i] <= 'z')
		{
			calc = 25 + 2 * (str[i] - 'z');
			str[i] = str[i] - calc;
		}
		else if (str[i] >= 'N' && str[i] <= 'Z')
		{
			calc = 25 + 2 * (str[i] - 'Z');
			str[i] = str[i] - calc;
		}
		ft_putchar(str[i]);	
		i++;		
	}
}

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return (-1);
	}
	alphamirror(argv[1]);
	ft_putchar('\n');
	return 0;
}