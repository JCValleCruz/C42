/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printutils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 18:37:50 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/08/02 20:15:58 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_printlist (t_list **lst, char *c)
{
	t_list	*aux;
	aux = *lst;
	printf("\033[;36m\nCadena: %s\n\n",c);
	while (aux)
	{
		printf("\033[;31m Value: %lli \033[0m \t \033[;33m Pos: %i \033[0m \t \033[;36mIndex: %i \t \033[;37mTarget: %i \t \033[;38mCoste A: %i \t Coste B: %i\n", aux->value, aux->pos, aux->index, aux->target, aux->costa, aux->costb);
		aux = aux->next;
	}
	printf("%c",'\n');
}

void	ft_print_node(t_list *lst)
{
	printf("NODOO:");
	printf("\033[;31m Value: %lli \033[0m \t \033[;33m Pos: %i \033[0m \t \033[;36mIndex: %i \t \033[;37mTarget: %i \t \033[;38mCoste A: %i \t Coste B: %i\n", lst->value, lst->pos, lst->index, lst->target, lst->costa, lst->costb);
}