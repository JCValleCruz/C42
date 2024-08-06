/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_firstmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 12:22:36 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/08/06 11:36:12 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_firstmove(t_list **a, t_list **b)
{
	int			size;
	int			half;
	t_list		*aux;
	
	ft_setpos(a);
	aux = *a;
	size = ft_lstsize(*a);
	half = size / 2;
	if (size % 2 != 0)
		half++;
	while ((size > 3) && (half < size))
	{
		if ((*a)->index <= half)
		{
			pb(a, b);
			size--;
		}
		else
			ra(a);
	}
	while (size > 3)
	{
		pb(a, b);
		size--;
	}
}
