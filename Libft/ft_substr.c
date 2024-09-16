/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillagr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:00:57 by jvillagr          #+#    #+#             */
/*   Updated: 2024/09/16 21:00:21 by jvillagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*aux(char *res)
{
	res = (char *)malloc(1);
	if (!res)
		return (NULL);
	res[0] = '\0';
	return (res);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	int		i;
	int		s_len;

	i = 0;
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (aux(res));
	if (len < s_len)
		s_len = len;
	res = (char *)malloc(s_len + 1);
	if (!res)
		return (NULL);
	while (s[start] != '\0' && s_len)
	{
		res[i] = s[start];
		i++;
		start++;
		s_len--;
	}
	res[i] = '\0';
	return (res);
}

/*
int main()
{
	char	buff[30] = "Aqui se vive bien!";
	char	*aux;
	aux = ft_substr(buff, 8, 4);
	printf("Subcadena final: %s\n", aux);
	return 0;
}*/
