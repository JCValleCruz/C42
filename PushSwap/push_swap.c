/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 18:17:12 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/07/31 12:46:57 by jvalle-d         ###   ########.fr       */
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
	
	/* t_list *try;				//Prueba Push
	try = ft_lstnew(10);		//Prueba Push
	ft_lstadd_back(&b,try);		//Prueba Push	 */
		
	ft_printlist(&a,"A");
	ft_printlist(&b,"B");
	ft_setpos(&a);
	ft_setindex(&a);
	ft_printlist(&a,"A con POS");
	ft_moveswap(&a);
	ft_printlist(&a,"A Swap");
	ft_rotate(&a);
	ft_printlist(&a,"A Rotate");
	ft_revrotate(&a);
	ft_printlist(&a,"A Inverse Rotate");
	ft_push(&a,&b);
	ft_push(&a,&b);
	ft_push(&a,&b);
	ft_setpos(&a);
	ft_setpos(&b);
	ft_printlist(&a,"A Push");
	ft_printlist(&b,"B Push");
}