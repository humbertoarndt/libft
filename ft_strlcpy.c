/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harndt <humberto.arndt@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 16:35:35 by harndt            #+#    #+#             */
/*   Updated: 2022/04/05 17:56:51 by harndt           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
