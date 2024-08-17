// Las maximas librerias necesarias
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char *ft_strchr(const char* s, int c)
{
	while (*s != '\0')
	{
		if (*s == (unsigned char) c)
			return (char *)s;
		s++;
	}
	if ((unsigned char)c == '\0')
		return (char *)s;
	return NULL;
}

/*
int main()
{
	char	buff[25] = "Dios es omnipresente.";
	char	*aux;
	aux = ft_strchr(buff, 'm');
	printf("Resto de la string: %s\n", aux);
	return 0;
}
*/
