/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillagr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:59:05 by jvillagr          #+#    #+#             */
/*   Updated: 2024/09/16 20:33:30 by jvillagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	howmany(char const *s, char c)
{
	size_t	res;
	int		i;
	int		in_substr;

	res = 0;
	in_substr = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != (unsigned char) c && !in_substr)
		{
			in_substr = 1;
			res++;
		}
		else if (s[i] == (unsigned char) c)
			in_substr = 0;
		i++;
	}
	return (res);
}

static char	**free_mem(char **r, size_t i)
{
	while (i--)
		free(r[i]);
	free(r);
	return (NULL);
}

static char	*extract(char const *s, size_t len)
{
	char	*substring;

	substring = (char *)malloc((len + 1) * sizeof(char));
	if (!substring)
		return (NULL);
	substring[len] = '\0';
	while (len--)
		substring[len] = s[len];
	return (substring);
}

char	**ft_split(char const *s, char c)
{
	char const	*start;
	char		**res;
	size_t		len;
	int			i;

	i = 0;
	len = 0;
	res = malloc((howmany(s, c) + 1) * sizeof(char *));
	if (!s || !res)
		return (NULL);
	while (*s)
	{
		if (*s != c && len++ == 0)
			start = s;
		if ((*s == c || *(s + 1) == '\0') && len > 0)
		{
			res[i++] = extract(start, len);
			if (!res[i - 1])
				return (free_mem(res, i));
			len = 0;
		}
		s++;
	}
	res[i] = NULL;
	return (res);
}

/*
int main()
{
	char	*buff = " !_  Hola a los toldos! ";
	char	**result;
	result = ft_split(buff, ' ');
	for (int i = 0; i < 5; i++)
		printf("Aqui el res: %s\n", result[i]);
	return 0;
}*/
