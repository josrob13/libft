// Include bueno, el de la libreria
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	i;
	int	res;
	i = 0;
	res = ft_strlen(src);
	while (src[i] != '\0' && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return res;
}
