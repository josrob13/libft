/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillagr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:21:30 by jvillagr          #+#    #+#             */
/*   Updated: 2024/09/16 17:09:40 by jvillagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	i;
	const unsigned char *a;
	const unsigned char *b;

	a = (const unsigned char *)s1;
	b = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (a[i] != b[i])
			return ((int) a[i] - b[i]);
		i++;
	}
	return (0);
}

/*
int	main()
{
	char	buf1[25] = "HelloQ World!!";
	char	buf2[25] = "HelloPPPK12orld!!";
	int	r;
	r = ft_memcmp(buf1, buf2, 6);
	printf("Resultado: %d\n", r);
	return 0;
}
*/
