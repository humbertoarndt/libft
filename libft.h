/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harndt <humberto.arndt@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 21:42:28 by harndt            #+#    #+#             */
/*   Updated: 2022/04/07 20:00:45 by harndt           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <ctype.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
// Remover
# include <stdio.h>

// <ctype.h> functions:
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);
int			ft_tolower(int c);
int			ft_toupper(int c);

// <string.h> functions:
// Memory:
int			ft_memcmp(const void *str1, const void *str2, size_t n);
void		*memchr(const void *str, int c, size_t n);
void		*ft_memset(void *str, int c, int n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t n);

// Strings:
size_t		ft_strlen(const char *str);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strdup(const char *str);
char		*ft_strchr(const char *str, int c);
char		*ft_strrchar(const char *str, int c);

// BSD (<bsd/string.h>):
size_t		ft_strlcpy(char *dst, const char *src, size_t size);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
char		*ft_strnstr(const char *s1, const char *s2, size_t n);

// <stdlib.h> functions:
int			ft_atoi(const char *str);
void		*ft_calloc(size_t nitems, size_t size);

// <strings.h> functions:
void		ft_bzero(void *s, size_t n);

#endif