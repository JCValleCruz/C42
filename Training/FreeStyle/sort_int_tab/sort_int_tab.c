/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:30:51 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/07/08 19:33:08 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
	int swap;
	unsigned int i = 0;

	while (i < size)
	{
		printf("%i\n",tab[i]);
		i++;
	}
	i = 0;

	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			swap = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = swap;

			i = 0;		
		}
		else
			i++;
	}
	

	i = 0;
	printf("\n");
	while (i < size)
	{
		printf("%d\n",tab[i]);
		i++;
	}
	
}

int main (void)
{
	int tab [] = {1,21,8,19};
	unsigned int n = 4;
	sort_int_tab(tab, n);
	return 0;	
}