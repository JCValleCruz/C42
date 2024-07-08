/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 11:16:27 by jormoral          #+#    #+#             */
/*   Updated: 2024/06/28 14:11:10 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	checkletter(char c, va_list args)
{
	if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (c == '%')
		return (ft_putchar('%'));
	if ((c == 'i') || (c == 'd'))
		return (ft_putnbr(va_arg(args, int)));
	if ((c == 'x') || (c == 'X'))
		return (ft_printhex(va_arg(args, unsigned int), c));
	if (c == 'u')
		return (ft_putnbr_unsigned(va_arg(args, unsigned int)));
	if (c == 'p')
		return (ft_putvoid(va_arg(args, unsigned long long)));
	return (0);
}

int	ft_printf(char const *s, ...)
{
	va_list	args;
	int		i;
	int		x;

	x = 0;
	i = 0;
	va_start(args, s);
	while (s[i] != '\0')
	{
		if (s[i] == '%' )
		{
			i++;
			x = x + checkletter(s[i], args);
			i++;
		}
		else if (s[i] != '\0')
		{
			write(1, &s[i], 1);
			i++;
			x++;
		}
	}
	va_end (args);
	return (x);
}

int	main(void)
{
	
	int c = ft_printf("escribeme esto: %i\n", -120);
	int j = printf("escribeme esto: %i\n", -120);

	printf("%d\n",c);
	printf("%d\n",j);
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
