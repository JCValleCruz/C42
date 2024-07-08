/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 19:35:48 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/07/08 19:55:22 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_rrange (int start, int end)
{
	int size;
	int *result;
	int i = 0;
	
	size = start + end;
	if (size < 0)
	{
		size = size * -1;
	}
	result = malloc ((size) * (sizeof(int)));
	if (!result)
		return NULL;
	
	while (size--)
	{
		if (end > start)
		{
			result[i] = end - i;
			i++;
		}
		else if (end < start)
		{
			result[i] = end + i;
			i++;
		}
	}

	if (start == end)
	{
		result[0] == start;
	}
	return (result);
}