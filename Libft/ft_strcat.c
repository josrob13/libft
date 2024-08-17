// Las maximas librerias necesarias
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
//#include "ft_strcpy.c"

char *ft_strcat(char *restrict dst, const char *restrict src)
{
	int	i;
	int	j;
	i = 0;
	j = 0;
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return dst;
}

/*
int main()
{
	char *buff1 = (char *) malloc(60);
	buff1 = ft_strcpy(buff1, "Me gustan los choripanes...");
	char buff2[30] = " con un poco de canela.";
	buff1 = ft_strcat(buff1, buff2);
	printf("Cadena completa: %s\n", buff1);

	free(buff1);
	return 0;
}
*/
