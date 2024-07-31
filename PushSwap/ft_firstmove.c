/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_firstmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 12:22:36 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/07/31 14:27:38 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_firstmove(t_list **a, t_list **b)
{
	int size;
	int half;
	t_list *aux;
	aux = *a;
	size = ft_lstsize(aux);
	half = size / 2;
	while ((size > 3) && (half < size))
	{
		if (aux->index <= half)
		{
			ft_push(a, b);
			size--;
		}	
		else 
			ft_rotate(a);
	}
	while (size > 3)
	{
		ft_push(a, b);
		size--;
	}		
}