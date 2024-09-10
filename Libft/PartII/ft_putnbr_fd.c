// Las maximas librerias necesarias
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include "./ft_putchar_fd.c"

static void	ft_putnbr_rec(int n, int fd)
{
	if (n < 0)
	{
		if (n == INT_MIN)
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
