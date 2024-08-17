// Las maximas librerias necesarias
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	int	i;
	int	found;
	i = 0;
	found = 0;
	while(i < n && !found)
	{
		((unsigned char *)dest)[i] = ((const unsigned char *)src)[i];
		if (((const unsigned char *)src)[i] == (unsigned char) c)
			found = 1;
		i++;
	}
	if (i >= n)
		i = n - 1;
	if (found)
		return dest + i;
	else
		return NULL;
}

/*
int main()
{
	char	source[] = "Hello world!!";
	char	destination[20];
	char	*result;

	result = ft_memccpy(destination, source, 'o', 14);

	if (result != NULL)
		printf("Cadena copiada hasta la 'o': %s\n", destination);
	else
		printf("No se ha encontrado ninguna 'o' en la cadena.\n");

	return 0;
}
*/
