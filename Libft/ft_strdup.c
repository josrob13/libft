/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillagr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:37:50 by jvillagr          #+#    #+#             */
/*   Updated: 2024/09/16 20:39:56 by jvillagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*res;
	int		i;
	int		total_l;

	total_l = ft_strlen(s);
	res = (char *)malloc(total_l + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (i < total_l)
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

/*
int	main()
{
	char buf1[25] = "Hello World!";
	char *copy;
	copy = ft_strdup(buf1);
	printf("Texto copiado: %s.-\n", copy);
	return 0;
}
*/
