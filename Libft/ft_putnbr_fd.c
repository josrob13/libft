/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillagr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:58:31 by jvillagr          #+#    #+#             */
/*   Updated: 2024/09/16 17:10:54 by jvillagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr_rec(int n, int fd)
{
	if (n < 0)
	{
		if (n == -2147483648)
		{
			ft_putnbr_rec(n / 10, fd);
			ft_putchar_fd('8', fd);
		}
		else
		{
			ft_putchar_fd('-', fd);
			ft_putnbr_rec(-n, fd);
		}
	}
	else if (n > 9)
	{
		ft_putnbr_rec(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	ft_putnbr_rec(n, fd);
}

/*
int main()
{
	int	n = INT_MIN;
	ft_putnbr_fd(n, 1);
	return 0;
}*/
