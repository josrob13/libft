// Las maximas librerias necesarias
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

size_t ft_strlen(const char *s)
{
	size_t	res;
	res = 0;
	while (s[res])
		res++;
	return res;
}

/*
int main()
{
	char	buff[25] = "HOLA!!"; // Length = 6
	size_t 	size;
	size = strlen(buff);
	printf("Longitud de cadena: %ld\n", size);
	return 0;
}
*/
