// Las maximas librerias necesarias
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char *ft_strcpy(char *restrict dst, char *restrict src)
{
	int	i;
	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return dst;
}

/*
int main()
{
	char	buff1[25] = "Hello World!!";
	char	*buff2;
	buff2 = malloc(25);
	buff2 = ft_strcpy(buff2, buff1);
	printf("Bufer 2: %s\n", buff2);
	return 0;
}
*/
