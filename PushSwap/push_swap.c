/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 18:17:12 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/07/30 19:39:40 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main (int argc, char **argv)
{
	t_list	*a;
	t_list 	*b;
	t_list 	*nodo;
	int 	i;
	 
	a = NULL;
	b = NULL;
	i = 1;
	while (i < argc)
	{
		nodo = ft_lstnew(ft_atoi(argv[i++]));
		ft_lstadd_back(&a,nodo);
	}
	ft_printlist(&a,'N');
	ft_setpos(&a);
	ft_setindex(&a);
	ft_printlist(&a,'P');
	ft_moveswap(&a);
	ft_printlist(&a,'S');
	ft_rotate(&a);
	ft_printlist(&a,'R');
	ft_revrotate(&a);
	ft_printlist(&a,'I');
}