// Las maximas librerias necesarias
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

static	int count_digits(int n)
{
	int	cont;
	cont = 0;
	if (n <= 0)
		cont++;
	while (n)
	{
		n /= 10;
		cont++;
	}
	return cont;
}

char	*ft_itoa(int n)
{
	char		*result;
	int		len;
	int		limit;
	unsigned int	num;

	len = count_digits(n);
	result = (char *)malloc((len+1) * sizeof(char));
	result[len] = '\0';
	num = n;
	limit = 0;
	if (n < 0)
	{
		result[0] = '-';
		limit = 1;
		num = -n;
	}
	while (len-- > limit)
	{
		result[len] = (num % 10) + '0';
		num /= 10;
	}
	return result;
}

/*
int main()
{
	int	n = INT_MAX;
	char	*s;
	s = ft_itoa(n);
	printf("Resultado final: -.%s.-\nNumero en si: %d\n", s, n);
	return 0;
}*/
