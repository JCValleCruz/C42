/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 11:39:53 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/06/14 11:58:07 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar (char c)
{
    write (1, &c, 1);
}

void ft_printnumbers (int number)
{
    char digits [] = "0123456789";
    if (number > 9)
        ft_printnumbers(number / 10);
    
    write (1, &digits[number % 10],1);       
}

void    fizzbuzz (int n)
{
    int i;
    i = 1;

    while (i <= n)
    {
        if (i % 3 == 0  && i % 5 == 0)
        {
            write (1,"fizzbuzz",8);
            ft_putchar ('\n');
        }
        else if (i % 3 == 0)
        {
            write (1,"fizz",4);
            ft_putchar ('\n');
        }
        else if (i % 5 == 0)
        {
            write (1,"buzz",4);
            ft_putchar ('\n');
        }
        else
        {
        ft_printnumbers(i);
        ft_putchar ('\n');
        }
        i++;
    }
}

int main (void)
{
    int n = 100;
    fizzbuzz (n);
    return (0);
}