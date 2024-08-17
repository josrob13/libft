// Las maximas librerias necesarias
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return 1;
	else
		return 0;
}

/*
int main()
{
	char	n = '2';
	printf("Resultado: %d\n", ft_isdigit(n));
	return 0;
}
*/
