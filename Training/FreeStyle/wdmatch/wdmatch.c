/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:25:37 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/07/09 12:40:26 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar (char c)
{
	write (1, &c, 1);
}

void	ft_putstr (char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	wdmatch (char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] != '\0')
	{
		while(s2[j] != '\0')
		{
			if (s1[i] == s2[j])
			{
				i++;
			}
			j++;
		}
		break;	
	}
	if (s1[i] == '\0')
	{
		ft_putstr(s1);
	}
	
}

int main (int argc, char **argv)
{
	if (argc != 3)
	{
		ft_putchar('\n');
		return (-1);
	}
	wdmatch(argv[1],argv[2]);
	ft_putchar('\n');
	return 0;
}