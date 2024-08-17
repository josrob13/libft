// Las maximas librerias necesarias
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "ft_strlen.c"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*res;
	res = malloc(nelem * elsize);
	if (!res)
		return NULL;
	ft_bzero(res, nelem * elsize);
	return res;
}
