// Las maximas librerias necesarias
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void *ft_memset(void *s, int c, size_t n)
{
	int	i;
	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char) c;
		i++;
	}
	return s;
}
/*
int main()
{
	char buffer[15];

	ft_memset(buffer, 'A', 14);
	buffer[15] = '\0';

	printf("Buffer lleno antes: %s\n", buffer);
	
	ft_memset(buffer, 'B', 5);
	printf("Buffer despues de ponerle B's: %s\n", buffer);

	return 0;
}
*/
