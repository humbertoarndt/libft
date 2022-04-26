/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harndt <humberto.arndt@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 14:43:31 by harndt            #+#    #+#             */
/*   Updated: 2022/04/26 08:14:04 by harndt           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*ret;

	if (2147483647 / nitems < size)
		return (NULL);
	ret = malloc(nitems * size);
	if (!ret)
		return (NULL);
	if (ret)
		ft_bzero(ret, nitems * size);
	return (ret);
}
