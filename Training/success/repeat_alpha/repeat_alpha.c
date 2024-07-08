/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 13:52:11 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/06/21 14:07:14 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar (char c)
{
	write(1,&c,1);
}

void	ft_repeatalpha(char *str)
{
	int i = 0;
	int times = 0;
	
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			times = str[i] - 'a';
		}
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			times = str[i] - 'A';
		}
		while (times >= 1)
		{
			ft_putchar(str[i]);
			times--;
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
	ft_repeatalpha(argv[1]);
	ft_putchar('\n');
	return (0);
}