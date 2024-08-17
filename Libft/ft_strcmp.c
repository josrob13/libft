// Las maximas librerias necesarias
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 && *s2)
	{
		if ((unsigned char)*s1 != (unsigned char)*s2)
			return (unsigned char)*s1 - (unsigned char)*s2;
		s1++;
		s2++;
	}
	return (unsigned char)*s1 - (unsigned char)*s2;
}

/*
int main()
{
	char	buff[50] = "Saludos a toda La Serna, Fuenlabrada";
	char	buff2[50] = "Saludos a toda la sorno, fuenlobroda";
	int	res;
	res = ft_strcmp(buff, buff2);
	printf("Resultado de las cadenas: %d\n", res);
	return 0;
}
*/
