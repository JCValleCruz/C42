/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 12:17:31 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/06/18 12:17:31 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar (char c)
{
    write (1, &c, 1);
}

char    *ft_finalcheck (char *str)
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

int ft_strlen (char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

int     ft_check (char *str)
{
    str = ft_finalcheck(str);
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ' ')
            return (1);

        i++;
    }
    return (0);
}

void    rostring (char *str)
{
    str = ft_finalcheck(str);
    int check = ft_check(str);
    int i = 0;
    int fstart = 0;
    int fend =   0;
    int word;
    int lonstr = ft_strlen(str);
    int times;

    if (check == 0)
    {
        while (str[i] != '\0')
        {
            ft_putchar(str[i]);
            i++;
        }
    }
    else
    { 

    while (str[i] == ' ')
        i++;
    fstart = i;
    while (str[i] != ' ')
        i++;    
    fend = i;
    word = fend - fstart;
    times = lonstr - word;        
    while (str[i] == ' ')
    i++;
    while (str[i] != '\0')
    {
        while (str[i] == ' ' && str[i + 1] == ' ')
            i++;
        ft_putchar(str[i]);
        i++;
    }
    i = fstart;
    ft_putchar (' ');
    while (i < fend)
    {        
        ft_putchar(str[i]);
        i++;
    }
  
    }
}

#include <stdio.h>
int main (int argc, char **argv)
{
    if (argc < 2)
    {
        ft_putchar ('\n');
        return (1);
    }
    //printf("%s\n", ft_epur(argv[1]));
    rostring (argv[1]);
    ft_putchar ('\n');
    return (0);
}