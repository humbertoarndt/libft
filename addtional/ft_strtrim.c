/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harndt <humberto.arndt@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 19:31:12 by harndt            #+#    #+#             */
/*   Updated: 2022/04/12 20:11:36 by harndt           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{	
	size_t	i;
	size_t	j;

	if (!*s2)
		return ((char *)s1);
	i = 0;
	while (s1[i] != '\0' && i < n)
	{
		j = 0;
		while (s1[i + j] == s2[j] && s2[j] != '\0' && (i + j < n))
			j++;
		if (s2[j] == '\0')
			return ((char *)s1 + i);
		i++;
	}
	return (NULL);
}

size_t	ft_strlen(const char *str)
{
	int	size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*str;
	size_t	len;
	
	if (!s1 || !set)
		return (NULL);
	len = (ft_strlen(s1) - ft_strlen(set));
	str = (char *)malloc(len * sizeof(char) + 1);
	if (!str)
		return (NULL);
	//tudo para trás de str pode ser copiado em um novo array
	if (!ft_strnstr(s1, set, ft_strlen(s1)))
		return ((char *)s1);
	str = ft_strnstr(s1, set, ft_strlen(s1));
	return (str);
}

int main(void)
{
	const char s1[] = "Humberto Arndt de Oliveira";
	const char set[] = "berto";
	char *ret;

	ret = ft_strtrim(s1, set);
	printf("ret: |%s|\n", ret);
}