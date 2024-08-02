/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 18:17:12 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/08/02 19:56:09 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main (int argc, char **argv)
{
	t_list	*a;
	t_list 	*b;
	t_list 	*nodo;
	int 	size;
	int 	i;
	 
	a = NULL;
	b = NULL;
	i = 1;
	while (i < argc)
	{
		nodo = ft_lstnew(ft_atoll(argv[i++]));
		if(nodo->value > INT_MAX || nodo->value < INT_MIN)
		{
			write(STDERR_FILENO, "Error\n", 6);
			exit (1);
		}
		ft_lstadd_back(&a,nodo);
	}
	ft_check_doubles(&a); //hacer!!!!!!!!!!!!!!!
	/* t_list *try;				//Prueba Push
	try = ft_lstnew(10);		//Prueba Push
	ft_lstadd_back(&b,try);		//Prueba Push	 */
		
	/* ft_printlist(&a,"A");
	ft_printlist(&b,"B");
	ft_setpos(&a);
	ft_setindex(&a);
	ft_printlist(&a,"A con POS");
	ft_moveswap(&a);
	ft_printlist(&a,"A Swap");
	ft_rotate(&a);
	ft_printlist(&a,"A Rotate");
	ft_revrotate(&a);
	ft_printlist(&a,"A Inverse Rotate"); */
	size = ft_lstsize(a);
	ft_setindex(&a);
	ft_setpos(&a);
	ft_firstmove(&a,&b);
	ft_setpos(&a);
	ft_sort_three(&a);
	ft_setpos(&a);
	ft_setpos(&b);
	ft_target(&a,&b,size);
	ft_costa(&a,&b);
	ft_costb(&b);
	/* ft_printlist(&a,"A");
	ft_printlist(&b,"B"); */
	
	 while(b)
	{
		ft_setpos(&a);
		ft_setpos(&b);
		ft_target(&a,&b,size);
		ft_costa(&a,&b);
		ft_costb(&b);
		/* ft_printlist(&a,"A");
		ft_printlist(&b,"B"); */
		ft_perform_moves(&a,&b);
	} 
		ft_setpos(&a);
		ft_costb(&a);
		ft_ultimatemove(&a);
		ft_setpos(&a);
 	/* 	ft_printlist(&a,"A");
		ft_printlist(&b,"B"); */
}