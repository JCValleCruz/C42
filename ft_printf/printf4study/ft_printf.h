/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:17:58 by jormoral          #+#    #+#             */
/*   Updated: 2024/06/28 13:36:25 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

int	ft_printf(char const *str, ...);
int	ft_putstr(char *str);
int	ft_putchar(char c);
int	ft_putnbr(int number);
int	ft_printhex(unsigned int number, char c);
int	ft_putnbr_unsigned(unsigned int number);
int	ft_putvoid(unsigned long long number);

#endif