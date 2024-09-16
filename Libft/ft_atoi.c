/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillagr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:27:19 by jvillagr          #+#    #+#             */
/*   Updated: 2024/09/16 20:54:43 by jvillagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	int	res;
	int	i;
	int	sign;

	i = 0;
	sign = 0;
	res = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'
		|| s[i] == '\v' || s[i] == '\f' || s[i] == '\r')
		i++;
	while (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign++;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10 + (s[i] - '0');
		i++;
	}
	if ((sign % 2) == 1)
		res *= -1;
	return (res);
}

/*
int	main()
{
	char	buff[50] = "+---+-2147483648uy buenas corta";
	char	buff2[30] = "2147483647";
	int	num;
	num = ft_atoi(buff);
	printf("Numero final: %d\n", num);
	return 0;
}*/
