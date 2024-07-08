/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 11:06:19 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/06/17 11:15:23 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar (char c)
{
    write (1, &c, 1);
}

void    ft_firstword (char *str)
{
    int i;

    i = 0;
    while (str[i] == ' ' && str[i] != '\0')
    {      
        i++;
    }
    while (str[i] != ' ' && str[i] != '\0')
    {
        ft_putchar (str[i]);
        i++;
    }
}

int main (int argc, char **argv)
{
    if (argc != 2)
    {
        ft_putchar ('\n');
        return (-1);
    }
    ft_firstword (argv[1]);
    ft_putchar ('\n');
    return (0);
}