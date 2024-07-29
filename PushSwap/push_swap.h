/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 18:13:13 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/07/29 19:36:08 by jvalle-d         ###   ########.fr       */
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
	int					value;
	int					pos;
	int					index;
	struct s_list		*next;
} t_list;

//lst utils
t_list		*ft_lstnew(int value);
int			ft_lstsize(t_list *lst);
void		ft_lstadd_back(t_list **lst, t_list *new);
//print utils (BORRAR!!!)
void		ft_printlist (t_list **lst, char c);
//libft utils
int			ft_atoi(const char *str);
//Posición
void		ft_setpos(t_list **lst);
//Index
void		ft_putindex (t_list **a, int *tab, int size);
void		ft_setindex(t_list **a);
int 		*ft_sort_int_tab(int *tab, int size);



#endif