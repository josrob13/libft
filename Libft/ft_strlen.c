/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillagr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:39:28 by jvillagr          #+#    #+#             */
/*   Updated: 2024/09/16 17:13:48 by jvillagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	res;
	res = 0;
	while (s[res])
		res++;
	return res;
}

/*
int	main()
{
	char	buff[25] = "HOLA!!"; // Length = 6
	size_t 	size;
	size = strlen(buff);
	printf("Longitud de cadena: %ld\n", size);
	return 0;
}
*/
