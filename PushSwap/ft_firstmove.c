/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_firstmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 12:22:36 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/07/31 15:49:03 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_firstmove(t_list **a, t_list **b)
{
	int size;
	int half;
	int i;
	t_list *aux;

	aux = *a;
	size = ft_lstsize(aux);
	half = size / 2;
	i = 1;

	// Mover la mitad inferior de los elementos al stack b
	while (i <= half)
	{
		aux = *a; // Actualizamos el puntero aux para que apunte al primer elemento actual
		if (aux->index <= half)
		{
			ft_push(a, b); // Mueve el elemento actual de a a b
			i++;
		}
		else 
		{
			ft_rotate(a); // Rota el stack a
		}
	}

	// Mover el resto de los elementos indiscriminadamente, dejando solo 3 en a
	while (ft_lstsize(*a) > 3)
	{
		ft_push(a, b);
	}
}
