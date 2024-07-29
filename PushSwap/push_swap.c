/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 18:17:12 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/07/29 19:37:13 by jvalle-d         ###   ########.fr       */
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
	ft_printlist(&a,'A');
	ft_setpos(&a);
	ft_setindex(&a);
	ft_printlist(&a,'A');
			
	 
}