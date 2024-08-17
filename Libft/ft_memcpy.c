// Las maximas librerias necesarias
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	int	i;
	i = 0;
	while(i < n)
	{
		((unsigned char *)dest)[i] = ((const unsigned char *)src)[i];
		i++;
	}
	return dest;
}

/*
int main()
{
	char	buffer[10]="Holaa!!";
	char	buffer2[10]="Adioooss.";

	printf("Buffer antes de la movida: %s\n", buffer);
	ft_memcpy(buffer, buffer2, 4);
	printf("Buffer despues de la movida: %s\n", buffer);

	return 0;
}
*/
