// Las maximas librerias necesarias
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char *ft_strncpy(char *dst, const char *restrict src, size_t n)
{
	int	i;
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dst[i] = '\0';
		i++;
	}
	return dst;
}

/*
int main()
{
	char	buff1[25] = "Hola a todo el mundo!";
	char	*buff2;
	buff2 = (char *) malloc(26);
	buff2 = ft_strncpy(buff2, buff1, 6);
	buff2[6] = '\0';
	printf("BUfer 2: %s.-\n", buff2);
	return 0;
}
*/
