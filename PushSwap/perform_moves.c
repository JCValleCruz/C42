/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   perform_moves.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 14:56:39 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/08/01 15:00:09 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"					//Pdte.


void perform_moves(t_list **b)
{
	t_list *cheap;
	cheap = ft_find_cheapest(&b);
	if(cheap->costa < 0 && cheap->costb < 0)
		perform_reverse(&b);
	else if (cheap->costa > 0 && cheap->costb > 0)
		perform_rotates(&b);
	else
		perform_mix(&b);
}