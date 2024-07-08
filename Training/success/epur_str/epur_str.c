/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 12:31:16 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/06/14 13:23:41 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar (char c)
{
    write (1, &c, 1);
}

char    *ft_checkfinal (char *str)
{
    int n;
    int i;
    i = 0;
    n = 1;
    
    while (str[i] != '\0')
    {
        i++;
    }
    while (str[i - n] == ' ')
    {
        str[i - n] =  str[i];
        n++;
    }
    return (str);
}

void    ft_epurstr (char *str)
{
    char *new = ft_checkfinal(str);
    int i = 0;
    while (new[i] == ' ')
        i++;
    
    while (new[i] != '\0')
    {       
        while (new[i] == ' ' && new[i - 1] == ' ')
            i++;
        
        ft_putchar(new[i]);
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

    ft_epurstr(argv[1]);
    ft_putchar ('\n');
    return (0);
}