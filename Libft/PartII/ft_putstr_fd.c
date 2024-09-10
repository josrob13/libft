// Las maximas librerias necesarias
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "../ft_strlen.c"

void	ft_putstr_fd(char *s, int fd)
{
	int	len;

	len = ft_strlen(s);
	write(fd, s, len);
}

/*
int main()
{
	char	*s = "Muy buenas!\n";

	ft_putstr_fd(s, 1);
	return 0;
}*/
