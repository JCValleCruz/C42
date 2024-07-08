/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 13:38:19 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/06/14 14:06:00 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		max(int* tab, unsigned int len)
{
    int i;
    int max;
    
    i = 0;
    max = tab[i];
    if (!tab)
        return (0);
    while (len--)
    {
        if (tab[i] > max)
        {
            max = tab[i];
        }
        i++;
    }
    return (max);
}
/*
int main(void)
{
    int tab[] = {0, -42, 0, -5, -64, -2, -68, -1};
    int len = 8;
    printf("%i", max(tab, len));
    return(0);
}
*/