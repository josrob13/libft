// Las maximas librerias necesarias
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "../ft_strlen.c"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
int main()
{
	ft_putchar_fd('A', 1);
	ft_putchar_fd('\n', 1);
	return 0;
}*/
