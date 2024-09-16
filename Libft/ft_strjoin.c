/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillagr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:59:33 by jvillagr          #+#    #+#             */
/*   Updated: 2024/09/16 18:54:23 by jvillagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_strcat(char *restrict dst, const char *restrict src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	res = malloc(len1 + len2 + 1);
	if (!res)
		return (NULL);
	res[0] = '\0';

	res = ft_strcat(res, s1);
	res = ft_strcat(res, s2);

	return (res);
}

/*
int main()
{
	char	buff[25] = "Hola a todos";
	char	buff2[25] = " los venezolanos!";
	char	*aux;
	aux = ft_strjoin(buff, buff2);
	printf("Resultado: %s\n", aux);
	return 0;
}*/
