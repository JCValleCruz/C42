/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 12:01:04 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/06/14 12:27:55 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar (char c)
{
    write (1, &c, 1);
}

void    ft_stc (char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '_')
        {
            str[i] = str[i + 1] - 32;
            ft_putchar(str[i]);
            i = i + 2;                              
        }
        ft_putchar(str[i]);
        i++;
    }
}

int main (int argc, char **argv)
{
    if (argc != 2)
    {
        ft_putchar('\n');
        return (-1);
    }
    ft_stc (argv[1]);
    ft_putchar ('\n');
    return (0);
}