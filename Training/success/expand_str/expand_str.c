/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 17:30:36 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/06/18 17:40:54 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar (char c)
{
    write (1, &c, 1);
}

char    *ft_checkfinal (char *str)
{
    int i = 0;
    int n = 1;

    while (str[i] != '\0')
        i++;

    while (str[i - n] == ' ')
    {
        str[i - n] = str[i];
        n++;
    }
    return (str);    
}

void    ft_expandstr (char *str)
{
    str = ft_checkfinal(str);
    int i = 0;
    while (str[i] == ' ')
        i++;
    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            write (1, "   ", 3);
            while (str[i] == ' ')
            i++;
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
    ft_expandstr (argv[1]);
    ft_putchar ('\n');
    return (0);    
}