/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harndt <humberto.arndt@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 18:41:54 by harndt            #+#    #+#             */
/*   Updated: 2022/04/12 19:21:14 by harndt           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	len;

	if (!dst || !src || !size)
		return (0);
	len = ft_strlen(src);
	while (*src && --size)
		*dst++ = *src++;
	*dst = '\0';
	return (len);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(dst);
	while (len + i + 1 < size && src[i])
	{
		dst[i + len] = src[i];
		i++;
	}
	dst[i + len] = '\0';
	return (ft_strlen(dst));
}

size_t	ft_strlen(const char *str)
{
	int	size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	size_t	len;
	
	if (!s1 || !s2)
		return (NULL);
	len = (ft_strlen(s1) + ft_strlen(s2));
	str = (char *)malloc(len * sizeof(char) + 1);
	if (!str)
		return (NULL);
	len = ft_strlcpy(str, s1, ft_strlen(s1) + 1);
	len = ft_strlcat(str, s2, (ft_strlen(s1) + ft_strlen(s2) + 1));
	return (str);
}

int main(void)
{
	const char s1[] = "Humberto";
	const char s2[] = "Doisberto";
	char *ret;
	size_t len;

	ret = ft_strjoin(s1, s2);
	len = ft_strlen(ret);
	printf("ret: |%s|\tsize: |%zu|\n", ret, len);
	
}