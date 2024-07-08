/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:46:07 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/06/28 13:59:06 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static  int	ft_command(char c, va_list arg)
{
	if (c == 's')
		return (ft_putstr(va_arg(arg, char *)));
	if (c == 'c')
		return (ft_putchar(va_arg(arg, int)));
	if (c == '%')
		return (ft_putchar('%'));
	if ((c == 'i') || (c == 'd'))
		return (ft_putnbr(va_arg(arg, int)));
	if ((c == 'x') || (c == 'X'))
		return (ft_printhex(va_arg(arg, unsigned int), c));
	if (c == 'u')
		return (ft_putnbr_unsigned(va_arg(arg, unsigned int)));
	if (c == 'p')
		return (ft_putvoid(va_arg(arg, unsigned long long)));
	return (0);
}

int ft_printf (char const *str, ...)
{
	va_list arg;
	int		i;
	int 	count;

	i = 0;
	count = 0;
	va_start(arg, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			count = count + ft_command (str[i + 1], arg);
			i = i + 2;
		}
		else
		{
			write (1, &str[i], 1);
			i++;
			count++;
		}
	}
	va_end (arg);
	return (count);
}

int	main(void)
{
	int c = ft_printf("FT_PRINTF Escribe: %p\n", "5");
	int j = printf("PRINTF Escribe: %p\n", "5");
	
}	
	/*
	ft_printf("porcentaje: %%\n");
	printf("porcentaje: %%\n");

	ft_printf("caracter: %c\n", 'a');
	printf("caracter: %c\n", 'a');

	ft_printf("digits: %d\n", 1997);
	printf("digits: %d\n", 1997);
	
	ft_printf("index: %i\n", -1997);
	printf("index: %i\n", -1997);
	
	ft_printf("hex minusculita: %x\n", 1997);
	printf("hex minusculita: %x\n", 1997);

	ft_printf("hex mayusculita: %X\n", 1997);
	printf("hex mayusculita: %X\n", 1997);

	ft_printf("sin signo: %u\n", +1997);
	printf("sin signo: %u\n", +1997);
	
	int a = ft_printf("el numero que quiero es: %p\n", &x);
	int b = printf("el numero que quiero es: %p\n", &x);
	ft_printf("retorna bien o fucked %d\n", a);
	ft_printf("retorna bien o fucked %d\n", b);
	printf("retorna bien o fucked %d\n", a);
	printf("retorna bien o fucked %d\n", b);
	return(0);
}*/
