/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillagr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:32:59 by jvillagr          #+#    #+#             */
/*   Updated: 2024/09/16 21:54:00 by jvillagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	get_maximum(char *dest, unsigned int size)
{
	int	i;

	i = 0;
	while (dest[i] && size > 0)
	{
		size--;
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	src_l;
	size_t	dest_l;

	if ((!src || !dest) && !size)
		return (0);
	src_l = ft_strlen(src);
	dest_l = get_maximum(dest, size);
	j = 0;
	i = get_maximum(dest, size);
	if (size < 1)
		return (src_l + size);
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (i < size)
		dest[i] = '\0';
	if (size < dest_l)
		return (src_l + size);
	return (dest_l + src_l);
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
	buff = ft_memcpy(buff, "Que hay de nuevo...", 19);
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
}*/
