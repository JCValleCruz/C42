/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   perform_moves.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 14:56:39 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/08/02 13:53:21 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"					//Pdte.

void ft_perform_moves(t_list **a, t_list **b)
{
	t_list *cheap;
	cheap = ft_find_cheapest(b);
	if(cheap->costa < 0 && cheap->costb < 0)
		ft_perform_reverse(a,b,cheap);
	else if (cheap->costa > 0 && cheap->costb > 0)
		ft_perform_rotates(a,b,cheap);
	else
		ft_perform_mix(a,b,cheap);
} 

int	ft_abs(int value)
{
	if (value < 0)
		value = value * -1;
	else
		value = value * 1;	
	return (value);		
}
t_list	*ft_find_cheapest(t_list **lst)
{
	int	acos;
	int	bcos;
	int totalcost;
	int cheap;
	t_list	*temp;
	t_list 	*result;
	
	temp = *lst;
	cheap = ft_abs(temp->costa) + ft_abs(temp->costb);
	while(temp)
	{
		acos = temp->costa;
		bcos = temp->costb;
		totalcost = ft_abs(acos) + ft_abs(bcos);
		if (totalcost <= cheap)
		{
			cheap = totalcost;
			result = temp;
		}
		temp = temp->next;		
	}
	//printf("\n\n%i",result->value);
	return (result);
}



