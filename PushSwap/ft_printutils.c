/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printutils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 18:37:50 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/07/29 19:17:41 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_printlist (t_list **lst, char c)
{
	t_list	*aux;
	aux = *lst;
	printf("%c:\n",c);
	while (aux)
	{
		printf("Value: %i \t Pos: %i \t Index: %i\n", aux->value, aux->pos, aux->index);
		aux = aux->next;
	}
}