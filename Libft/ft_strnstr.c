/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillagr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:21:41 by jvillagr          #+#    #+#             */
/*   Updated: 2024/09/16 20:07:06 by jvillagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	/*
	while (big[i] != '\0')
	{
		res = i;
		j = 0;
		while (big[i] != '\0' && big[i] == little[j] && j < len)
		{
			j++;
			if (j >= len)
				return ((char *)big + res);
			i++;
		}
		if (j == 0)
			i++;
	}
	return (NULL);*/

char	*ft_strnstr(const char* big, const char* little, size_t len)
{
	int	i;
	int	j;
	int	res;

	i = 0;
	res = 0;
	if (big == NULL || little == NULL)
		return (NULL);

	if (*little == '\0')
		return ((char *)big);
	
	res = ft_strlen(little);
	if (res > len)
		return (NULL);

	while (big[i] != '\0' && i + res <= len)
	{
		j = 0;
		while (little[j] != '\0' && big[i+j] == little[j])
			j++;
		if (j == res)
			return ((char *)&big[i]);
		i++;
	}

	return (NULL);
}

/*
int	main()
{
	char	buff[25] = "Gordo, vamos, despierta";
	char	*k;
	k = ft_strnstr(buff, "deposito", 2);
	printf("Cadena final: %s\n", k);
	return 0;
}*/
