// Las maximas librerias necesarias
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "../ft_strlen.c"
#include "../ft_strcat.c"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	len1;
	size_t	len2;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	res = malloc(len1 + len2 + 1);
	res = ft_strcat(res, s1);
	res = ft_strcat(res, s2);
}

/*
int main()
{
	char	buff[25] = "Hola a todos";
	char	buff2[25] = " los venezolanos!";
	char	*aux;
	aux = ft_strjoin(buff, buff2);
	printf("Resultado: %s\n", aux);
	return 0;
}*/
