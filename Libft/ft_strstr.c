// Las maximas librerias necesarias
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char *ft_strstr(const char* haystack, const char* needle)
{
	int	i;
	int	j;
	int	res;
	i = 0;
	res = 0;
	if (*needle == '\0')
		return (char *)haystack;
	while (haystack[i] != '\0')
	{
		res = i;
		j = 0;
		while (haystack[i] == needle[j])
		{
			j++;
			if (needle[j] == '\0')
				return (char *)haystack + res;
			i++;
		}
		if (j == 0)
			i++;
	}
	return NULL;
}

/*
int main()
{
	char	buff[30] = "Fernando, abre llllla puerta";
	char	*r;
	r = ft_strstr(buff, "la");
	printf("Subcadena: %s\n", r);
	return 0;
}
*/
