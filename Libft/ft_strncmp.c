/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillagr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:40:40 by jvillagr          #+#    #+#             */
/*   Updated: 2024/09/16 17:14:05 by jvillagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;
	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return (unsigned char)s1[i] - (unsigned char)s2[i];
		i++;
	}
	if (i >= n)
		return 0;
	else
		return (unsigned char)s1[i] - (unsigned char)s2[i];
}

/*
int	main()
{
	char	buff1[30] = "abcafac";
	char	buff2[30] = "abcde";
	int	res;
	res = ft_strncmp(buff1, buff2, 3);
	printf("Resultado final: %d\n", res);
	return 0;
}
*/

/*
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return (unsigned char)s1[i] - (unsigned char)s2[i];
			*/
