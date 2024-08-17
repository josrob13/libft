// Las maximas librerias necesarias
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

// A = src ; B = dest
void *ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char *a;
	unsigned char *b;
	a = (const unsigned char *)src;
	b = (unsigned char *)dest;

	if (b < a)
		while (n--)
			*b++ = *a++;
	else
		while (n--)
			b[n] = a[n];

	return dest;
}

/*
int main()
{
	char	buff[25] = "Hello, World!!";
	ft_memmove(buff, buff + 7, 5);
	printf("He aqui la frase: %s\n", buff);
	return 0;
}

*/
