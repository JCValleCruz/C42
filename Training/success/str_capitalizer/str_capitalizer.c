/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:41:56 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/06/20 12:26:09 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar (char c)
{
    write(1, &c, 1);
}

void    str_capitalizer (char *str)
{
    int i = 0;
    int flag = 0;
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
        if (str[0] >= 'a' && str[0] <= 'z')
        {
            str[0] -= 32;
        }
        while ((str[i] != '\0') && (str[i] == ' ' || str[i] >= 9 && str[i] <= 13))
        {
            flag = 1;
            ft_putchar(str[i]);
            i++;
        }
        if (flag == 1 && (str[i] >= 'a' && str [i] <= 'z'))
        {
            str[i] -= 32;
            flag = 0;
        }
        if (str[i] != '\0')
        {
            ft_putchar(str[i]);
            i++;
        }        
    }
}



int main (int argc, char **argv)
{
    if (argc < 2)
    {
        ft_putchar ('\n');
        return (-1);
    }
    int i = 1;
    while (argv[i])
    {
        str_capitalizer(argv[i]);
        ft_putchar('\n');
        i++;
    }
    return (0);
        
}