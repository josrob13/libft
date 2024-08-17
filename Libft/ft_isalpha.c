// Las maximas librerias necesarias
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return 1;
	else
		return 0;
}

/*
int main()
{
	char	c = '+';
	printf("Resultado: %d\n", ft_isalpha(c));
	return 0;
}
*/
