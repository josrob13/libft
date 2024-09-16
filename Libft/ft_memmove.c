/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillagr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:29:48 by jvillagr          #+#    #+#             */
/*   Updated: 2024/09/16 20:53:42 by jvillagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// A = src ; B = dest
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*a;
	unsigned char		*b;

	a = (const unsigned char *)src;
	b = (unsigned char *)dest;
	if (!dest && !src)
		return (NULL);
	if (b < a)
		while (n--)
			*b++ = *a++;
	else
		while (n--)
			b[n] = a[n];
	return (dest);
}

/*
int	main()
{
	char	buff[25] = "Hello, World!!";
	ft_memmove(buff, buff + 7, 5);
	printf("He aqui la frase: %s\n", buff);
	return 0;
}

*/
