// Las maximas librerias necesarias
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	int	i;
	i = 0;
	while (i < n)
	{
		if (((const unsigned char *)s)[i] == (unsigned char)c)
			return (void *)(s + i);
		i++;
	}
	return NULL;
}

/*
int main()
{
	char	buffer[25] = "Hello World!!";
	char	*r;
	r = ft_memchr(buffer, 'o', 20);
	if (r)
		printf("Aqui la cadena: %s\n", r);
	else
		printf("Ha habido un error...\n");
}
*/
