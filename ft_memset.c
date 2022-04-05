/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harndt <humberto.arndt@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 19:18:23 by harndt            #+#    #+#             */
/*   Updated: 2022/04/05 17:55:34 by harndt           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, int n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	while (n--)
		ptr[n] = c;
	return (str);
}
