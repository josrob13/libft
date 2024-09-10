// Las maximas librerias necesarias
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "../ft_strlen.c"

char	*ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
	char	*result;
	int	i;
	int	len;

	i = 0;
	if (!s || !f)
		return NULL;
	len = ft_strlen(s);
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return NULL;

	while (s[i] < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[len] = '\0';

	return result;
}
