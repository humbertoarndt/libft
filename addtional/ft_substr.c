/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harndt <humberto.arndt@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 18:31:39 by harndt            #+#    #+#             */
/*   Updated: 2022/04/12 18:59:15 by harndt           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = (char *) malloc (sizeof(char) * ft_strlen(str) + 1);
	while (str[i])
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

size_t	ft_strlen(const char *str)
{
	int	size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char *str;
	int i;

	i = 0;
	str = (char *)malloc((len * sizeof(char) + 1));
	if (!s || !str)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	while (len)
	{
		str[i] = s[start];
		i++;
		start++;
		len--;
	}
	str[i] = '\0';
	return (str);
}

#include <stdio.h>

int	main(void)
{
	const char s[] = "Tema o sangue antigo";
	unsigned int start = 7;
	size_t len = 6;
	char *ret;

	ret = ft_substr(s, start, len);
	printf("ret = |%s|\n", ret);
}