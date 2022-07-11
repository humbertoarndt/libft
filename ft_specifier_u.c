/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_u.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harndt <harndt@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 22:40:38 by harndt            #+#    #+#             */
/*   Updated: 2022/07/11 22:04:51 by harndt           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	specifier_u(va_list arg_ptr)
{
	char	*string;
	int		length;

	string = ft_utoa_base(va_arg(arg_ptr, unsigned int), DEC);
	length = ft_strlen(string);
	ft_putstr(string);
	if (string)
		free(string);
	return (length);
}
