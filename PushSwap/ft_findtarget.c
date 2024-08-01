/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findtarget.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 11:58:13 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/08/01 13:05:41 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_target(t_list **a, t_list **b, int size)
{
	t_list	*aux;
	aux = *b;
	
	while (aux)
	{
		ft_settarget(a,aux,size);
		aux = aux->next;
	}
	
}

void	ft_settarget(t_list **a, t_list *nodob, int size)
{
	t_list *min;
	t_list *max;
	t_list *aux;
	int i;
	max = ft_max(a);
	aux = *a;
	i = 1;
	if(nodob->index > max->index)
	{
		min = ft_min(a);							//Si es el index max se le aplica como target la pos del min index.
		nodob->target = min->pos;
	}
	else if (i <= size)
		ft_settargetnext(a,nodob,size);
}

void	ft_settargetnext(t_list **a,t_list *nodob, int size)
{	
	t_list	*aux;
	int i;
	
	aux = *a;
	i = 1;
	while(i <= size)
	{
		while(aux)
		{
			if(nodob->index + i == aux->index)
			{
				nodob->target = aux->pos;
				return;
			}
			aux = aux->next;
		}
		i++;
		aux = *a;
	}		
}
