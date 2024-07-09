/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvalle-d <jvalle-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 20:03:17 by jvalle-d          #+#    #+#             */
/*   Updated: 2024/07/09 20:19:29 by jvalle-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

size_t	ft_strspn (const char *s, const char *accept)
{
	size_t c = 0;
	size_t i = 0;
	while (s[c] != '\0')
	{
		while (accept[i] != '\0')
		{
			if(s[c] == accept[i])
				break;
			i++;
			if (accept[i] == '\0')
				return (c);	
		}
		i = 0;
		c++;
	}
	return (c);
}

int main (int argc, char **argv)
{
	size_t accepted = ft_strspn(argv[1],argv[2]);
	printf("%zu",accepted);
	return 0;
}