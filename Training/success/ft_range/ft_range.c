/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 19:13:23 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/06/17 19:49:03 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     *ft_range (int start, int end)
{
    int *range;
    int value;
    int x = 0;
   
        
    value = (end - start);
    if (value < 0)
        {
            value = value * -1;
        }
    value++;    
    range = (int *)malloc ((sizeof(int))*value);
    if (start < end)
    {
        while (value--)
        {
            range[x] = start + x;
            x++;
        }
    }
    else if (start > end)
    {
        while (value--)
        {
            range[x] = start - x;
            x++;
        }
    }
    else if (start == end)
        range[x] = start; 
    
    
    return (range);    
}