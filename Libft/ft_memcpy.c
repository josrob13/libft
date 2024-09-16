/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillagr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:28:35 by jvillagr          #+#    #+#             */
/*   Updated: 2024/09/16 17:09:51 by jvillagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int	i;
	i = 0;
	while(i < n)
	{
		((unsigned char *)dest)[i] = ((const unsigned char *)src)[i];
		i++;
	}
	return dest;
}

/*
int	main()
{
	char	buffer[10]="Holaa!!";
	char	buffer2[10]="Adioooss.";

	printf("Buffer antes de la movida: %s\n", buffer);
	ft_memcpy(buffer, buffer2, 4);
	printf("Buffer despues de la movida: %s\n", buffer);

	return 0;
}
*/
