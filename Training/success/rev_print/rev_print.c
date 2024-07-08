/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:47:51 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/07/04 13:50:47 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar (char c)
{
	write  (1, &c, 1);
}

void	rev_print (char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	while (i--)
	{
		ft_putchar(str[i]);
	}
}

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return (-1);
	}
	rev_print (argv[1]);
	ft_putchar('\n');
	return (0);
}