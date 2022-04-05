/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harndt <humberto.arndt@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 15:50:56 by harndt            #+#    #+#             */
/*   Updated: 2022/04/05 17:58:13 by harndt           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchar(const char *str, int c)
{
	int	len;

	len = ft_strlen(str);
	while (len && *(str + len) != (char)c)
		len--;
	if (*(str + len) == (char) c)
		return ((char *)(str + len));
	return (NULL);
}
