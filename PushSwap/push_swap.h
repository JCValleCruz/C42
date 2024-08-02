/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 18:13:13 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/08/02 20:16:19 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include <sys/errno.h>
# include <stdlib.h>

typedef struct s_list								//asi definimos la estructura del nodo.
{
	long long				value;
	int						pos;
	int						index;
	int						target;
	int						costa;
	int						costb;
	struct s_list			*next;
} t_list;

//lst utils
t_list		*ft_lstnew(long long value);
int			ft_lstsize(t_list *lst);
void		ft_lstadd_back(t_list **lst, t_list *new);
//print utils (BORRAR!!!)
void		ft_printlist (t_list **lst, char *c);
void	ft_print_node(t_list *lst);
//libft utils
long long			ft_atoll(const char *str);
//Posición
void		ft_setpos(t_list **lst);
//Index
void		ft_putindex (t_list **a, int *tab, int size);
void		ft_setindex(t_list **a);
int 		*ft_sort_int_tab(int *tab, int size);
//Sort Three
void		ft_sort_three(t_list **a);
t_list		*ft_max(t_list	**a);
t_list		*ft_min(t_list	**a);
//Moves
void		ft_moveswap (t_list **lst);
t_list		*ft_lastnode(t_list **lst);
t_list		*ft_secondlast(t_list **lst);
void		ft_rotate(t_list **lst);
void		ft_revrotate (t_list **lst);
//Push
void		ft_push(t_list **src, t_list **dst);
//First Move
void		ft_firstmove(t_list **a, t_list **b);
//Targets
void		ft_target(t_list **a, t_list **b, int size);
void		ft_settarget(t_list **a, t_list *nodob, int size);
void		ft_settargetnext(t_list **a,t_list *nodob, int size);
//Costes
void		ft_costa(t_list **a, t_list **b);
void		ft_costb(t_list	**b);
//print_moves
void	rrr(t_list **a, t_list **b);
void	rrb(t_list **b);
void	rra(t_list **a);
void	sa(t_list **a);
void	rr(t_list **a, t_list ** b);
void	rb(t_list **b);
void	ra(t_list **a);
void	pa(t_list **src, t_list **dst);
void	pb(t_list **src, t_list **dst);


void	ft_ultimatemove (t_list	**lst);
void	ft_perform_rotates(t_list **a, t_list **b, t_list *cheap);
void	ft_perform_reverse(t_list **a, t_list **b, t_list *cheap);
void 	ft_perform_moves(t_list **a, t_list **b);
int		ft_abs(int value);
t_list	*ft_find_cheapest(t_list **lst);
void	ft_perform_mix(t_list **a, t_list **b, t_list *cheap);
//CheckDoubles
int	ft_check_doubles(t_list **lst);

#endif