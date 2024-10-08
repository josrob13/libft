/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillagr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:21:41 by jvillagr          #+#    #+#             */
/*   Updated: 2024/09/16 22:19:10 by jvillagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	keep(int *res, int *j)
{
	(*res)++;
	(*j)++;
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;
	int	res;

	i = 0;
	if ((!big || !little) && !len)
		return (NULL);
	if (*little == '\0')
		return ((char *) big);
	while (big[i] != '\0')
	{
		j = 0;
		if (big[i] == little[j])
		{
			res = i;
			while (big[res] == little[j] && i < len && little[j])
				keep (&res, &j);
			if (res > len)
				return (NULL);
			if (little[j] == '\0' && i < len)
				return ((char *) &big[i]);
		}
		i++;
	}
	return (NULL);
}

/*
int	main()
{
	char	buff[25] = "Gordo, vamos, despierta";
	char	*k;
	k = ft_strnstr(((void*)0), "deposito", 2);
	printf("Cadena final: %s\n", k);
	return 0;
}*/
