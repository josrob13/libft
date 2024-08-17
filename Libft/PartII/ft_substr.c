// Las maximas librerias necesarias
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "../ft_strlen.c"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	int	i;
	int	s_len;
	i = 0;
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		res = (char *)malloc(1);
		if (!res)
			return NULL;
		*res = '\0';
		return res;
	}
	if (len < s_len)
		s_len = len;
	res = (char *)malloc(s_len + 1);
	if (!res)
		return NULL;
	while (s[start] != '\0' && s_len)
	{
		res[i] = s[start];
		i++;
		start++;
		s_len--;
	}
	return res;
}

int main()
{
	char	buff[30] = "Aqui se vive bien!";
	char	*aux;
	aux = ft_substr(buff, 8, 4);
	printf("Subcadena final: %s\n", aux);
	return 0;
}
