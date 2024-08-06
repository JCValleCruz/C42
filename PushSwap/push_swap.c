/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 18:17:12 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/08/06 13:02:33 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list		*a;
	t_list		*b;
	t_list		*nodo;
	int			size;
	int			arg_i;
	
	arg_i = 1;
	while(arg_i < argc)
	{
		if (argv[arg_i][0] == '\0')
		{
			write(STDERR_FILENO, "Error\n", 6);
			exit (1);
		}
		arg_i++;
	}
	a = NULL;
	b = NULL;
	arg_i = 1;
	ft_core(argc, argv, arg_i, &a, nodo);
	if(ft_lstsize(a) == 1)
		return(0);
	ft_push_swap(a, b);
}
 
void	ft_push_swap(t_list *a, t_list *b)
{
	int	size;

	size = ft_lstsize(a);
	ft_setindex(&a);
	ft_firstmove(&a,&b);
	ft_sort_three(&a);
	ft_target(&a,&b,size);
	ft_costa(&a,&b);
	ft_costb(&b);
	while (b)
	{
		ft_target(&a,&b,size);
		ft_costa(&a,&b);
		ft_costb(&b);
		ft_perform_moves(&a,&b);
	}
	ft_setpos(&a);
	ft_costb(&a);
	ft_ultimatemove(&a);
	ft_setpos(&a);
	ft_free_stack(&a);
	ft_free_stack(&b);
}
   
void ft_core(int argc, char **argv, int arg_i, t_list **a, t_list *nodo)
{	
	int i;
	char **split;

	i = -1;
	while (arg_i < argc)
	{
		split = ft_split(argv[arg_i++],' ');
		while (split[++i])
		{		
			nodo = ft_lstnew(ft_atoll(split[i], a, split));											
			if((nodo->value > INT_MAX || nodo->value < INT_MIN) ||
				((split[i][0] == '+' || split[i][0] == '-') && split[i][1] == '\0'))
			{
				free_split(split);
				free(nodo);															
				ft_print_error(a);			
			}
			ft_lstadd_back(a, nodo);
		}
		free_split(split);
		i = -1;
	}
	if (ft_check_doubles(a) == 0)
			ft_print_error(a);									
}
