/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvillagr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:00:26 by jvillagr          #+#    #+#             */
/*   Updated: 2024/09/16 17:13:57 by jvillagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
