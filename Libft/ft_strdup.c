// Las maximas librerias necesarias
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "ft_strlen.c"

char *ft_strdup(const char *s)
{
	int	i;
	int	total_l;
	char	*res;
	total_l = ft_strlen(s);
	res = (char *)malloc(total_l + 1);
	i = 0;
	while (i < total_l)
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\0';
	return res;
}

/*
int main()
{
	char buf1[25] = "Hello World!";
	char *copy;
	copy = ft_strdup(buf1);
	printf("Texto copiado: %s.-\n", copy);
	return 0;
}
*/
