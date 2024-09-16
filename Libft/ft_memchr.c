/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillagr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:40:18 by jvillagr          #+#    #+#             */
/*   Updated: 2024/09/16 17:09:25 by jvillagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (((const unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}

/*
int	main()
{
	char	buffer[25] = "Hello World!!";
	char	*r;
	r = ft_memchr(buffer, 'o', 20);
	if (r)
		printf("Aqui la cadena: %s\n", r);
	else
		printf("Ha habido un error...\n");
}
*/
