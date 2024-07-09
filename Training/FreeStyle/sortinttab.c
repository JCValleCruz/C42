/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortinttab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:23:42 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/07/09 11:57:45 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


int	*ft_sort (int *tab, unsigned int size)
{
	unsigned int i = 0;
	int swap;
	
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

	return (tab);
}

int main (int argc, char **argv)
{
	int tab [4] = {128,32,4,24};
	
	unsigned int size = 4;
	unsigned int i = 1;
	int tabu[] = {*ft_sort(tab, size)};

	
	while (i < size)
	{
		printf("\n%d\n",tabu[i]);
		i++;
	}
	return 0;


}