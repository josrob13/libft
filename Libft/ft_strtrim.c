/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillagr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:00:40 by jvillagr          #+#    #+#             */
/*   Updated: 2024/09/16 17:47:30 by jvillagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char *ft_strncpy(char *dst, const char *restrict src, size_t n)
{
	int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}

static	int	is_inside(char c, char const *set)
{
	while (*set != '\0')
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

// Always using ft_strncpy, could save it doing more lines in the if zone
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int	i;
	int	start;
	int	end;

	i = 0;
	while (s1[i] != '\0' && is_inside(s1[i], set))
		i++;
	start = i;
	i = ft_strlen(s1) - 1;
	while (i >= 0 && is_inside(s1[i], set))
		i--;
	end = i + 1;
	if (start > end)
		start = end;
	res = (char *) malloc(end - start + 1);
	if (!res)
		return (NULL);
	res = ft_strncpy(res, s1 + start, (end - start));
	res[end - start] = '\0';

	return (res);
}

/*
int main()
{
	char	buff1[45] = "Muyips pero que pasa peñita";
	char	s[30] = "Muy buena";
	char	*aux;
	aux = ft_strtrim(buff1, s);
	printf("Resultado final: .-%s-.\n", aux);
	return 0;
}*/
