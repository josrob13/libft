// Las maximas librerias necesarias
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "./ft_putstr_fd.c"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

/*
int main()
{
	char	*s = "EY! que tal";
	ft_putendl_fd(s, 1);

	return 0;
}*/
