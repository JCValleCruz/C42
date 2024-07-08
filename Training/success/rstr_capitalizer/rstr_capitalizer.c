/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 13:39:14 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/06/19 13:57:59 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar (char c)
{
    write (1, &c, 1);
}

void    ft_rstr (char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        i++;
    }
    i = 0;
    while (str[i] != '\0')
    {
        if ((str[i] >= 'a' && str[i] <= 'z') && (str[i + 1] == ' ' || str[i + 1] == '\0'))
        {
            str[i] -= 32;
        }
        ft_putchar(str[i]);
        i++;    
    }
}

int main (int argc, char **argv)
{
    if (argc < 2)
    {
        ft_putchar('\n');
        return (-1);
    }
    int i = 1;
    char *str = argv[i];
    while (argv[i])
    {
        ft_rstr(argv[i]);
        ft_putchar ('\n');
        i++;
    }
    return (0);
}