/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harndt <humberto.arndt@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 16:23:44 by harndt            #+#    #+#             */
/*   Updated: 2022/04/13 18:43:51 by harndt           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Count the amount of words in the array of strings.
 * @param s String containing each word.
 * @param c Character used as delimiter.
 * @return How many words were found.
**/
static int	ft_wordcount(const char *s, char c)
{
	int	wc;

	wc = 0;
	while (s)
	{
		while (*s == c)
			s++;
		if (*s)
			wc++;
		s = ft_strchr(s, c);
	}
	return (wc);
}

/**
 * @brief Find the next word on a array.
 * @param s String containing each word.
 * @param c Character used as delimiter.
 * @param strs Character array storing each word individually.
 * @return Character pointer to the next word found.
**/
static char	*ft_wordcpy(const char *s, char c, char **strs)
{
	char	*next;

	next = ft_strchr(s ,c);
	if (!next || !c)
	{
		next = (char *)s;
		while (*next)
			next++;
	}
	*strs = ft_substr(s, 0, next -s);
	return (next);
}

char	**ft_split(const char *s, char c)
{
	char	**strs;
	char	**buffer;

	if (!s)
		return (NULL);
	strs = (char **)malloc((ft_wordcount(s, c) + 1) * sizeof(*strs));
	if (!strs)
		return (NULL);
	buffer = strs;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			s = ft_wordcpy(s, c, strs++);
	}
	*strs = 0;
	return (buffer);
}
