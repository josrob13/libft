/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillagr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:34:05 by jvillagr          #+#    #+#             */
/*   Updated: 2024/09/16 21:00:52 by jvillagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = '\0';
		i++;
	}
}

/*
int	main()
{
	char	buffer[10]="Holaaa!!";
	printf("Buffer antes de la movida: %s\n", buffer);

	ft_bzero(buffer, 10);
	printf("Buffer despues de la movida: %s\n", buffer);

	int allzero = 1;
	for (int i = 0; i < 10; i++)
	{
		if(buffer[i] != '\0') {
			allzero = 0;
			break;
		}
	}

	if (allzero)
		printf("Tiene todo ceros!!\n");
	else
		printf("Ha salido algo mal...\n");

	return 0;
}
*/
