/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillagr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:33:46 by jvillagr          #+#    #+#             */
/*   Updated: 2024/09/16 17:14:33 by jvillagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char* s, int c)
{
	char	*res;
	
	res = NULL;
	while (*s != '\0')
	{
		if (*s == (unsigned char)c)
			res = (char *)s;
		s++;
	}
	if ((unsigned char)c == '\0')
		res = (char *)s;
	return (res);
}

/*
int	main()
{
	char	buff[25] = "Amor a Dios y al projimo";
	char	*aux;
	aux = ft_strrchr(buff, 'a');
	printf("Resto de la cadena: %s\n", aux);
	return 0;
}
*/
