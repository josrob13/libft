/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillagr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:32:59 by jvillagr          #+#    #+#             */
/*   Updated: 2024/09/16 20:05:11 by jvillagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Size is the total bytes reservated to the dest buffer.
// If it is equal or less than the actual length of the string on dest + NULL,
// then that means there is no space even for the NULL char '\0'
size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	size_t	rest;
	size_t	dst_l;
	size_t	src_l;

	dst_l = ft_strlen(dst);
	src_l = ft_strlen(src);
	if (size <= dst_l)		// Comparing reserved bytes
		return (size + src_l);

	rest = size - dst_l - 1;
	if (rest > 0)
	{
		ft_memcpy(dst + dst_l, src, rest);
		dst[dst_l + rest] = '\0';
	}

	return (dst_l + rest);
}

/*
int	main()
{
	int	i;
	size_t final;
	char *buff;
	char buff2[50] = " viejo! rabioso chismoso piromano exx";
	i = 0;
	buff = (char *) malloc(50);
	buff = ft_strcpy(buff, "Que hay de nuevo...");
	final = ft_strlcat(buff, buff2, 30);
	printf("Cadena final: %s.-\n", buff);
	printf("Longitud final: %ld\n", final);
	while (i < 30)
	{
		if (buff[i] == '\0')
			printf("NULO en pos: %d\n", i);
		i++;
	}
	printf("Posicion 29: %02x\n", (unsigned char)buff[29]);
	return 0;
}
*/
