/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_s.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harndt <harndt@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 22:38:59 by harndt            #+#    #+#             */
/*   Updated: 2022/07/11 22:04:43 by harndt           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	specifier_s(va_list arg_ptr)
{
	char	*string;
	int		length;

	string = va_arg(arg_ptr, char *);
	if (!string)
		string = "(null)";
	length = ft_strlen(string);
	ft_putstr(string);
	return (length);
}
