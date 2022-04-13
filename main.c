/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harndt <humberto.arndt@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 18:58:27 by harndt            #+#    #+#             */
/*   Updated: 2022/04/13 18:47:48 by harndt           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

# define MIN_INT	-2147483648
# define MAX_INT	2147483647

int main(void)
{	
	// int		i;
	// int		mine = 0;
	// int		theirs = 0;

	// /////ft_isalnum()
	// i = -128;
	// while (++i <= 255)
	// {
	// 	if(ft_isalnum(i))
	// 		mine++;
	// 	if(isalnum(i))
	// 		theirs++;
	// 	if((ft_isalnum(i) > 0 && isalnum(i) > 0) || ft_isalnum(i) == isalnum(i))
	// 		printf("ft_isalnum - [OK]\ti: |%d|\tmine: |%d|\ttheirs: |%d|\n", i, ft_isalnum(i), isalnum(i));
	// 	else
	// 		printf("ft_isalnum - [KO]\ti: |%d|\tmine: |%d|\ttheirs: |%d|\n", i, ft_isalnum(i), isalnum(i));
	// }

	// printf("\n======================================\n");
	// /////ft_isalpha()
	// i = -128;
	// while (++i <= 255)
	// {
	// 	if(ft_isalpha(i))
	// 		mine++;
	// 	if(isalpha(i))
	// 		theirs++;
	// 	if((ft_isalpha(i) > 0 && isalpha(i) > 0) || ft_isalpha(i) == isalpha(i))
	// 		printf("ft_isalpha - [OK]\ti: |%d|\tmine: |%d|\ttheirs: |%d|\n", i, ft_isalpha(i), isalpha(i));
	// 	else
	// 		printf("ft_isalpha - [KO]\ti: |%d|\tmine: |%d|\ttheirs: |%d|\n", i, ft_isalpha(i), isalpha(i));
	// }

	// printf("\n===============================================\n");
	// /////ft_isascii()
	// i = -128;
	// while (++i <= 255)
	// {
	// 	if(ft_isascii(i))
	// 		mine++;
	// 	if(isascii(i))
	// 		theirs++;
	// 	if((ft_isascii(i) > 0 && isascii(i) > 0) || ft_isascii(i) == isascii(i))
	// 		printf("ft_isascii - [OK]\ti: |%d|\tmine: |%d|\ttheirs: |%d|\n", i, ft_isascii(i), isascii(i));
	// 	else
	// 		printf("ft_isascii - [KO]\ti: |%d|\tmine: |%d|\ttheirs: |%d|\n", i, ft_isascii(i), isascii(i));
	// }

	// printf("\n===============================================\n");
	// /////ft_isdigit()
	// i = -128;
	// while (++i <= 255)
	// {
	// 	if(ft_isdigit(i))
	// 		mine++;
	// 	if(isdigit(i))
	// 		theirs++;
	// 	if((ft_isdigit(i) > 0 && isdigit(i) > 0) || ft_isdigit(i) == isdigit(i))
	// 		printf("ft_isdigit - [OK]\ti: |%d|\tmine: |%d|\ttheirs: |%d|\n", i, ft_isdigit(i), isdigit(i));
	// 	else
	// 		printf("ft_isdigit - [KO]\ti: |%d|\tmine: |%d|\ttheirs: |%d|\n", i, ft_isdigit(i), isdigit(i));
	// }

	// printf("\n===============================================\n");
	// /////ft_isprint()
	// i = -128;
	// while (++i <= 255)
	// {
	// 	if(ft_isprint(i))
	// 		mine++;
	// 	if(isprint(i))
	// 		theirs++;
	// 	if((ft_isprint(i) > 0 && isprint(i) > 0) || ft_isprint(i) == isprint(i))
	// 		printf("ft_isprint - [OK]\ti: |%d|\tmine: |%d|\ttheirs: |%d|\n", i, ft_isprint(i), isprint(i));
	// 	else
	// 		printf("ft_isprint - [KO]\ti: |%d|\tmine: |%d|\ttheirs: |%d|\n", i, ft_isprint(i), isprint(i));
	// }

	// printf("\n===============================================\n");
	// /////ft_tolower()
	// i = -1;
	// while (++i <= 255)
	// {
	// 	if(ft_tolower(i) != i)
	// 		mine++;
	// 	if(tolower(i) != i)
	// 		theirs++;
	// 	if((ft_tolower(i) > 0 && tolower(i) > 0) || ft_tolower(i) == tolower(i))
	// 		printf("ft_tolower - [OK]\ti: |%d|\tmine: |%d|\ttheirs: |%d|\n", i, ft_tolower(i), tolower(i));
	// 	else
	// 		printf("ft_tolower - [KO]\ti: |%d|\tmine: |%d|\ttheirs: |%d|\n", i, ft_tolower(i), tolower(i));
	// }

	// printf("\n===============================================\n");
	// /////ft_toupper()
	// i = -1;
	// while (++i <= 255)
	// {
	// 	if(ft_toupper(i) != i)
	// 		mine++;
	// 	if(toupper(i) != i)
	// 		theirs++;
	// 	if((ft_toupper(i) > 0 && toupper(i) > 0) || ft_toupper(i) == toupper(i))
	// 		printf("ft_toupper - [OK]\ti: |%d|\tmine: |%d|\ttheirs: |%d|\n", i, ft_toupper(i), toupper(i));
	// 	else
	// 		printf("ft_toupper - [KO]\ti: |%d|\tmine: |%d|\ttheirs: |%d|\n", i, ft_toupper(i), toupper(i));
	// }
	
	// printf("\n===============================================\n");
	// /////ft_strlen()
	// if(ft_strlen("HUMBERTO") == strlen("HUMBERTO"))
	// 	printf("ft_strlen - [OK]\tmine: |%zu|\ttheirs: |%lu|\n", ft_strlen("HUMBERTO"), strlen("HUMBERTO"));
	// else
	// 	printf("ft_strlen - [KO]\tmine: |%zu|\ttheirs: |%lu|\n", ft_strlen("HUMBERTO"), strlen("HUMBERTO"));
	// if(ft_strlen("École 42") == strlen("École 42"))
	// 	printf("ft_strlen - [OK]\tmine: |%zu|\ttheirs: |%lu|\n", ft_strlen("École 42"), strlen("École 42"));
	// else
	// 	printf("ft_strlen - [KO]\tmine: |%zu|\ttheirs: |%lu|\n", ft_strlen("École 42"), strlen("École 42"));
	// if(ft_strlen("abcdefghijklmnopqrstuvwxyz") == strlen("abcdefghijklmnopqrstuvwxyz"))
	// 	printf("ft_strlen - [OK]\tmine: |%zu|\ttheirs: |%lu|\n", ft_strlen("abcdefghijklmnopqrstuvwxyz"), strlen("abcdefghijklmnopqrstuvwxyz"));
	// else
	// 	printf("ft_strlen - [KO]\tmine: |%zu|\ttheirs: |%lu|\n", ft_strlen("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"), strlen("abcdefghijklmnopqrstuvwxyz"));
	// if(ft_strlen("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa") == strlen("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"))
	// 	printf("ft_strlen - [OK]\tmine: |%zu|\ttheirs: |%lu|\n", ft_strlen("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"), strlen("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"));
	// else
	// 	printf("ft_strlen - [KO]\tmine: |%zu|\ttheirs: |%lu|\n", ft_strlen("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"), strlen("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"));
	// if(ft_strlen("") == strlen(""))
	// 	printf("ft_strlen - [OK]\tmine: |%zu|\ttheirs: |%lu|\n", ft_strlen(""), strlen(""));
	// else
	// 	printf("ft_strlen - [KO]\tmine: |%zu|\ttheirs: |%lu|\n", ft_strlen(""), strlen(""));
	
	// printf("\n===============================================\n");
	// /////ft_memset()
	// char	m_memset[10];
	// char	t_memset[10];

	// bzero(m_memset, sizeof(m_memset));
	// bzero(t_memset, sizeof(m_memset));
	
	// memset(t_memset, 'a', 5);
	// ft_memset(m_memset, 'a', 5);
	// if(memcmp(m_memset, t_memset, 5) == 0)
	// 	printf("ft_memset - [OK]\tmine: |%s|\ttheirs: |%s|\n", m_memset, t_memset);
	// else
	// 	printf("ft_memset - [KO]\tmine: |%s|\ttheirs: |%s|\n", m_memset, t_memset);

	// bzero(m_memset, sizeof(m_memset));
	// bzero(t_memset, sizeof(m_memset));

	// memset(t_memset, 'b', 6);
	// ft_memset(m_memset, 'b', 6);
	// if(memcmp(m_memset, t_memset, 6) == 0)
	// 	printf("ft_memset - [OK]\tmine: |%s|\ttheirs: |%s|\n", m_memset, t_memset);
	// else
	// 	printf("ft_memset - [KO]\tmine: |%s|\ttheirs: |%s|\n", m_memset, t_memset);

	// bzero(m_memset, sizeof(m_memset));
	// bzero(t_memset, sizeof(m_memset));

	// memset(t_memset, 'h', 9);
	// ft_memset(m_memset, 'h', 9);
	// if(memcmp(m_memset, t_memset, 9) == 0)
	// 	printf("ft_memset - [OK]\tmine: |%s|\ttheirs: |%s|\n", m_memset, t_memset);
	// else
	// 	printf("ft_memset - [KO]\tmine: |%s|\ttheirs: |%s|\n", m_memset, t_memset);

	// printf("\n===============================================\n");
	// /////ft_memcmp()
	// char	a_memcmp[10];
	// char	b_memcmp[10];
	
	// memset(a_memcmp, '0', 1);
	// memset(b_memcmp, '0', 1);
	// if(ft_memcmp(a_memcmp, b_memcmp, 1) == memcmp(a_memcmp, b_memcmp, 1))
	// 	printf("ft_memcmp - [OK]\tmine: |%d|\ttheirs: |%d|\n", ft_memcmp(a_memcmp, b_memcmp, 1), memcmp(a_memcmp, b_memcmp, 1));
	// else
	// 	printf("ft_memcmp - [KO]\tmine: |%d|\ttheirs: |%d|\n", ft_memcmp(a_memcmp, b_memcmp, 1), memcmp(a_memcmp, b_memcmp, 1));
	
	// memset(a_memcmp, 'a', 3);
	// memset(b_memcmp, 'x', 3);
	// if(ft_memcmp(a_memcmp, b_memcmp, 3) == memcmp(a_memcmp, b_memcmp, 3))
	// 	printf("ft_memcmp - [OK]\tmine: |%d|\ttheirs: |%d|\n", ft_memcmp(a_memcmp, b_memcmp, 3), memcmp(a_memcmp, b_memcmp, 3));
	// else
	// 	printf("ft_memcmp - [KO]\tmine: |%d|\ttheirs: |%d|\n", ft_memcmp(a_memcmp, b_memcmp, 3), memcmp(a_memcmp, b_memcmp, 3));

	// memset(a_memcmp, 'b', 5);
	// memset(b_memcmp, 'b', 5);
	// if(ft_memcmp(a_memcmp, b_memcmp, 5) == memcmp(a_memcmp, b_memcmp, 5))
	// 	printf("ft_memcmp - [OK]\tmine: |%d|\ttheirs: |%d|\n", ft_memcmp(a_memcmp, b_memcmp, 5), memcmp(a_memcmp, b_memcmp, 5));
	// else
	// 	printf("ft_memcmp - [KO]\tmine: |%d|\ttheirs: |%d|\n", ft_memcmp(a_memcmp, b_memcmp, 5), memcmp(a_memcmp, b_memcmp, 5));
	
	// memset(a_memcmp, 'c', 7);
	// memset(b_memcmp, 'p', 7);
	// if(ft_memcmp(a_memcmp, b_memcmp, 7) == memcmp(a_memcmp, b_memcmp, 7))
	// 	printf("ft_memcmp - [OK]\tmine: |%d|\ttheirs: |%d|\n", ft_memcmp(a_memcmp, b_memcmp, 7), memcmp(a_memcmp, b_memcmp, 7));
	// else
	// 	printf("ft_memcmp - [KO]\tmine: |%d|\ttheirs: |%d|\n", ft_memcmp(a_memcmp, b_memcmp, 7), memcmp(a_memcmp, b_memcmp, 7));

	// printf("\n===============================================\n");
	// /////ft_memchr()
	// int	a_needle = 104;
	// int	b_needle = 98;
	// int	c_needle = 99;
	// int	d_needle = 72;
	// const char	haystack[] = "humbertoDoisbertoTresberto...Nberto";
	
	// if(ft_memchr(haystack, a_needle, ft_strlen(haystack)) == memchr(haystack, a_needle, ft_strlen(haystack)))
	// 	printf("ft_memchr - [OK]\tmine: |%s|\ttheirs: |%s|\n", (char *)ft_memchr(haystack, a_needle, ft_strlen(haystack)), (char *)memchr(haystack, a_needle, ft_strlen(haystack)));
	// else
	// 	printf("ft_memchr - [KO]\tmine: |%s|\ttheirs: |%s|\n", (char *)ft_memchr(haystack, a_needle, ft_strlen(haystack)), (char *)memchr(haystack, a_needle, ft_strlen(haystack)));

	// if(ft_memchr(haystack, b_needle, ft_strlen(haystack)) == memchr(haystack, b_needle, ft_strlen(haystack)))
	// 	printf("ft_memchr - [OK]\tmine: |%s|\ttheirs: |%s|\n", (char *)ft_memchr(haystack, b_needle, ft_strlen(haystack)), (char *)memchr(haystack, b_needle, ft_strlen(haystack)));
	// else
	// 	printf("ft_memchr - [KO]\tmine: |%s|\ttheirs: |%s|\n", (char *)ft_memchr(haystack, b_needle, ft_strlen(haystack)), (char *)memchr(haystack, b_needle, ft_strlen(haystack)));

	// if(ft_memchr(haystack, c_needle, ft_strlen(haystack)) == memchr(haystack, c_needle, ft_strlen(haystack)))
	// 	printf("ft_memchr - [OK]\tmine: |%s|\ttheirs: |%s|\n", (char *)ft_memchr(haystack, c_needle, ft_strlen(haystack)), (char *)memchr(haystack, c_needle, ft_strlen(haystack)));
	// else
	// 	printf("ft_memchr - [KO]\tmine: |%s|\ttheirs: |%s|\n", (char *)ft_memchr(haystack, c_needle, ft_strlen(haystack)), (char *)memchr(haystack, c_needle, ft_strlen(haystack)));

	// if(ft_memchr(haystack, d_needle, ft_strlen(haystack)) == memchr(haystack, d_needle, ft_strlen(haystack)))
	// 	printf("ft_memchr - [OK]\tmine: |%s|\ttheirs: |%s|\n", (char *)ft_memchr(haystack, d_needle, ft_strlen(haystack)), (char *)memchr(haystack, d_needle, ft_strlen(haystack)));
	// else
	// 	printf("ft_memchr - [KO]\tmine: |%s|\ttheirs: |%s|\n", (char *)ft_memchr(haystack, d_needle, ft_strlen(haystack)), (char *)memchr(haystack, d_needle, ft_strlen(haystack)));

	// printf("\n===============================================\n");
	// /////ft_memcpy()
	// char	ft_dest[50];
	// char	or_dest[50];
	// const char	ft_src[] = "Humberto";
	// const char	or_src[] = "Doisberto";
	
	// if (memcmp(ft_memcpy(ft_dest, ft_src, ft_strlen(ft_src)),memcpy(or_dest, ft_src, ft_strlen(ft_src)),strlen(ft_src)) == 0)
	// 	printf("ft_memcpy - [OK]\tmine: |%s|\ttheirs: |%s|\n", (char *)ft_memcpy(ft_dest, ft_src, ft_strlen(ft_src)), (char *)memcpy(ft_dest, ft_src, ft_strlen(ft_src)));
	// else
	// 	printf("ft_memcpy - [KO]\tmine: |%s|\ttheirs: |%s|\n", (char *)ft_memcpy(ft_dest, ft_src, ft_strlen(ft_src)), (char *)memcpy(ft_dest, ft_src, ft_strlen(ft_src)));

	// ft_bzero(ft_dest, sizeof(ft_dest));
	// ft_bzero(or_dest, sizeof(or_dest));

	// if (memcmp(ft_memcpy(ft_dest, ft_src, ft_strlen(ft_src)),memcpy(or_dest, or_src, ft_strlen(or_src)),strlen(ft_src)) == 0)
	// 	printf("ft_memcpy - [OK]\tmine: |%s|\ttheirs: |%s|\n", (char *)ft_memcpy(ft_dest, ft_src, ft_strlen(ft_src)), (char *)memcpy(or_dest, or_src, ft_strlen(ft_src)));
	// else
	// 	printf("ft_memcpy - [KO]\tmine: |%s|\ttheirs: |%s|\n", (char *)ft_memcpy(ft_dest, ft_src, ft_strlen(ft_src)), (char *)memcpy(or_dest, or_src, ft_strlen(ft_src)));

	// printf("\n===============================================\n");
	// /////ft_memmove()
	// char	ft_movedest[50];
	// char	or_movedest[50];
	// const char	ft_movesrc[] = "Humberto";
	// const char	or_movesrc[] = "Doisberto";
	
	// if (memcmp(ft_memmove(ft_movedest, ft_movesrc, sizeof(ft_movesrc)),memmove(or_movedest, ft_movesrc, sizeof(ft_movesrc)),sizeof(ft_movesrc)) == 0)
	// 	printf("ft_memmove - [OK]\tmine: |%s|\ttheirs: |%s|\n", (char *)ft_memmove(ft_movedest, ft_movesrc, sizeof(ft_movesrc)), (char *)memmove(ft_movedest, ft_movesrc, sizeof(ft_movesrc)));
	// else
	// 	printf("ft_memmove - [KO]\tmine: |%s|\ttheirs: |%s|\n", (char *)ft_memmove(ft_movedest, ft_movesrc, sizeof(ft_movesrc)), (char *)memmove(ft_movedest, ft_movesrc, sizeof(ft_movesrc)));

	// ft_bzero(ft_movedest, sizeof(ft_movedest));
	// ft_bzero(or_movedest, sizeof(or_movedest));

	// if (memcmp(ft_memmove(ft_movedest, ft_movesrc, sizeof(ft_movesrc)),memmove(or_movedest, or_movesrc, sizeof(or_movesrc)),sizeof(ft_src)) == 0)
	// 	printf("ft_memmove - [OK]\tmine: |%s|\ttheirs: |%s|\n", (char *)ft_memmove(ft_movedest, ft_movesrc, sizeof(ft_movesrc)), (char *)memmove(or_movedest, or_movesrc, sizeof(ft_movesrc)));
	// else
	// 	printf("ft_memmove - [KO]\tmine: |%s|\ttheirs: |%s|\n", (char *)ft_memmove(ft_movedest, ft_movesrc, sizeof(ft_movesrc)), (char *)memmove(or_movedest, or_movesrc, sizeof(ft_movesrc)));

	// printf("\n===============================================\n");
	// /////ft_strlcpy()
	// const char	check_ft_strlcpy_src[] = "Humberto";
	// const char	check_or_strlcpy_src[] = "Humberto";
	// char	check_ft_strlcpy_dst[9];
	// char	check_or_strlcpy_dst[9];

	// if(ft_strlcpy(check_ft_strlcpy_dst,check_ft_strlcpy_src, sizeof(check_ft_strlcpy_src)) == strlcpy(check_or_strlcpy_dst,check_or_strlcpy_src, sizeof(check_or_strlcpy_src)))
	// 	printf("ft_strlcpy - [OK]\tmine: |%s|%zu|\ttheirs: |%s|%zu|\n", check_ft_strlcpy_dst, ft_strlcpy(check_ft_strlcpy_dst,check_ft_strlcpy_src, sizeof(check_ft_strlcpy_src)), check_or_strlcpy_dst, strlcpy(check_or_strlcpy_dst,check_or_strlcpy_src, sizeof(check_or_strlcpy_src)));
	// else
	// 	printf("ft_strlcpy - [KO]\tmine: |%s|%zu|\ttheirs: |%s|%zu|\n", check_ft_strlcpy_dst, ft_strlcpy(check_ft_strlcpy_dst,check_ft_strlcpy_src, sizeof(check_ft_strlcpy_src)), check_or_strlcpy_dst, strlcpy(check_or_strlcpy_dst,check_or_strlcpy_src, sizeof(check_or_strlcpy_src)));

	// const char	check_ft_strlcpy_src2[] = "Humberto";
	// const char	check_or_strlcpy_src2[] = "Doisberto";
	// char	check_ft_strlcpy_dst2[10];
	// char	check_or_strlcpy_dst2[10];

	// if(ft_strlcpy(check_ft_strlcpy_dst2,check_ft_strlcpy_src2, sizeof(check_ft_strlcpy_src2)) == strlcpy(check_or_strlcpy_dst2,check_or_strlcpy_src2, sizeof(check_or_strlcpy_src2)))
	// 	printf("ft_strlcpy - [OK]\tmine: |%s|%zu|\ttheirs: |%s|%zu|\n", check_ft_strlcpy_dst2, ft_strlcpy(check_ft_strlcpy_dst2,check_ft_strlcpy_src2, sizeof(check_ft_strlcpy_src2)), check_or_strlcpy_dst2, strlcpy(check_or_strlcpy_dst2,check_or_strlcpy_src2, sizeof(check_or_strlcpy_src2)));
	// else
	// 	printf("ft_strlcpy - [KO]\tmine: |%s|%zu|\ttheirs: |%s|%zu|\n", check_ft_strlcpy_dst2, ft_strlcpy(check_ft_strlcpy_dst2,check_ft_strlcpy_src2, sizeof(check_ft_strlcpy_src2)), check_or_strlcpy_dst2, strlcpy(check_or_strlcpy_dst2,check_or_strlcpy_src2, sizeof(check_or_strlcpy_src2)));

	// printf("\n===============================================\n");
	// /////ft_strlcat()
	// const char	check_ft_strlcat_src[] = "Humberto";
	// char		check_ft_strlcat_dst[18] = "Doisberto";
	// size_t		ft_strcat;
	
	// const char	check_og_strlcat_src[] = "Humberto";
	// char		check_og_strlcat_dst[18] = "Doisberto";
	// size_t	og_strcat;

	// printf("ft: |%s|\t|%s|\n", check_ft_strlcat_src, check_ft_strlcat_dst);
	// printf("og: |%s|\t|%s|\n", check_og_strlcat_src, check_og_strlcat_dst);
	
	// ft_strcat = ft_strlcat(check_ft_strlcat_dst, check_ft_strlcat_src, 18);
	// og_strcat = strlcat(check_og_strlcat_dst, check_og_strlcat_src, 18);
	
	// printf("ft: |%s|\t|%s|\n", check_ft_strlcat_src, check_ft_strlcat_dst);
	// printf("og: |%s|\t|%s|\n", check_og_strlcat_src, check_og_strlcat_dst);

	// if(ft_strcat == og_strcat)
	// 	printf("ft_strlcat - [OK]\tmine: |%zu|\ttheirs: |%zu|\n", ft_strcat, og_strcat);
	// else
	// 	printf("ft_strlcat - [KO]\tmine: |%zu|\ttheirs: |%zu|\n", ft_strcat, og_strcat);

	// printf("\n===============================================\n");
	// /////ft_strchr()
	// const char	chr_str[] = "Humberto";
	// int chr_a = 97; // a
	// int chr_b = 66; // B
	// int chr_c = 153; // +
	// int chr_d = 117; // u
	// char	*ft_chr;
	// char	*og_chr;

	// ft_chr = ft_strchr(chr_str, chr_a);
	// og_chr = strchr(chr_str, chr_a);
	// if (ft_chr == og_chr)
	// 	printf("ft_strchr [OK]- mine: |%s|\ttheirs: |%s|\n", ft_chr, og_chr);
	// else
	// 	printf("ft_strchr [KO]- mine: |%s|\ttheirs: |%s|\n", ft_chr, og_chr);
	
	// ft_chr = ft_strchr(chr_str, chr_b);
	// og_chr = strchr(chr_str, chr_b);
	// if (ft_chr == og_chr)
	// 	printf("ft_strchr [OK]- mine: |%s|\ttheirs: |%s|\n", ft_chr, og_chr);
	// else
	// 	printf("ft_strchr [KO]- mine: |%s|\ttheirs: |%s|\n", ft_chr, og_chr);
	
	// ft_chr = ft_strchr(chr_str, chr_c);
	// og_chr = strchr(chr_str, chr_c);
	// if (ft_chr == og_chr)
	// 	printf("ft_strchr [OK]- mine: |%s|\ttheirs: |%s|\n", ft_chr, og_chr);
	// else
	// 	printf("ft_strchr [KO]- mine: |%s|\ttheirs: |%s|\n", ft_chr, og_chr);
	
	// ft_chr = ft_strchr(chr_str, chr_d);
	// og_chr = strchr(chr_str, chr_d);
	// if (ft_chr == og_chr)
	// 	printf("ft_strchr [OK]- mine: |%s|\ttheirs: |%s|\n", ft_chr, og_chr);
	// else
	// 	printf("ft_strchr [KO]- mine: |%s|\ttheirs: |%s|\n", ft_chr, og_chr);

	// printf("\n===============================================\n");
	// /////ft_strrchr()
	// const char rchr_str[] = "HumHummHubertoberto";
	// int rchr_a = 72; // H
	// int rchr_b = 98; // b
	// int rchr_c = 41; // )
	// int rchr_d = 128; // Ç
	// char *ft_rchr;
	// char *og_rchr;

	// ft_rchr = ft_strrchr(rchr_str, rchr_a);
	// og_rchr = ft_strrchr(rchr_str, rchr_a);
	// if (ft_rchr == og_rchr)
	// 	printf("ft_strrchr [OK]- mine: |%s|\ttheirs: |%s|\n", ft_rchr, og_rchr);
	// else
	// 	printf("ft_strrchr [KO]- mine: |%s|\ttheirs: |%s|\n", ft_rchr, og_rchr);

	// ft_rchr = ft_strrchr(rchr_str, rchr_b);
	// og_rchr = ft_strrchr(rchr_str, rchr_b);
	// if (ft_rchr == og_rchr)
	// 	printf("ft_strrchr [OK]- mine: |%s|\ttheirs: |%s|\n", ft_rchr, og_rchr);
	// else
	// 	printf("ft_strrchr [KO]- mine: |%s|\ttheirs: |%s|\n", ft_rchr, og_rchr);

	// ft_rchr = ft_strrchr(rchr_str, rchr_c);
	// og_rchr = ft_strrchr(rchr_str, rchr_c);
	// if (ft_rchr == og_rchr)
	// 	printf("ft_strrchr [OK]- mine: |%s|\ttheirs: |%s|\n", ft_rchr, og_rchr);
	// else
	// 	printf("ft_strrchr [KO]- mine: |%s|\ttheirs: |%s|\n", ft_rchr, og_rchr);

	// ft_rchr = ft_strrchr(rchr_str, rchr_d);
	// og_rchr = ft_strrchr(rchr_str, rchr_d);
	// if (ft_rchr == og_rchr)
	// 	printf("ft_strrchr [OK]- mine: |%s|\ttheirs: |%s|\n", ft_rchr, og_rchr);
	// else
	// 	printf("ft_strrchr [KO]- mine: |%s|\ttheirs: |%s|\n", ft_rchr, og_rchr);

	// printf("\n===============================================\n");
	// /////ft_strncmp()
	// const char cmp_1[] = "humberto";
	// const char cmp_2[] = "humberto";
	// const char cmp_3[] = "doisberto";
	// int	ft_cmp;
	// int	og_cmp;

	// ft_cmp = ft_strncmp(cmp_1, cmp_2, 3);
	// og_cmp = strncmp(cmp_1, cmp_2, 3);
	// if (ft_cmp == og_cmp)
	// 	printf("ft_strncmp [OK] - mine: |%d|\ttheirs: |%d|\n", ft_cmp, og_cmp);
	// else
	// 	printf("ft_strncmp [KO] - mine: |%d|\ttheirs: |%d|\n", ft_cmp, og_cmp);

	// ft_cmp = ft_strncmp(cmp_1, cmp_3, 2);
	// og_cmp = strncmp(cmp_1, cmp_3, 2);
	// if (ft_cmp == og_cmp)
	// 	printf("ft_strncmp [OK] - mine: |%d|\ttheirs: |%d|\n", ft_cmp, og_cmp);
	// else
	// 	printf("ft_strncmp [KO] - mine: |%d|\ttheirs: |%d|\n", ft_cmp, og_cmp);

	// printf("\n===============================================\n");
	// /////ft_strncmp()
	// const char nstr[] = "berto";
	// const char nstr_1[] = "humberto";
	// const char nstr_2[] = "doisberto";
	// const char nstr_3[] = "otrebsiod";
	// char *ft_nstr;
	// char *og_nstr;

	// ft_nstr = ft_strnstr(nstr_1, nstr, 8);
	// og_nstr = ft_strnstr(nstr_1, nstr, 8);
	// if (ft_nstr == og_nstr)
	// 	printf("ft_strnstr [OK] - mine: |%s|\ttheirs: |%s|\n", ft_nstr, og_nstr);
	// else
	// 	printf("ft_strnstr [KO] - mine: |%s|\ttheirs: |%s|\n", ft_nstr, og_nstr);

	// ft_nstr = ft_strnstr(nstr_2, nstr, 9);
	// og_nstr = ft_strnstr(nstr_2, nstr, 9);
	// if (ft_nstr == og_nstr)
	// 	printf("ft_strnstr [OK] - mine: |%s|\ttheirs: |%s|\n", ft_nstr, og_nstr);
	// else
	// 	printf("ft_strnstr [KO] - mine: |%s|\ttheirs: |%s|\n", ft_nstr, og_nstr);

	// ft_nstr = ft_strnstr(nstr_3, nstr, 9);
	// og_nstr = ft_strnstr(nstr_3, nstr, 9);
	// if (ft_nstr == og_nstr)
	// 	printf("ft_strnstr [OK] - mine: |%s|\ttheirs: |%s|\n", ft_nstr, og_nstr);
	// else
	// 	printf("ft_strnstr [KO] - mine: |%s|\ttheirs: |%s|\n", ft_nstr, og_nstr);

	// printf("\n===============================================\n");
	// /////ft_atoi()
	// if(ft_atoi("++123") == atoi("++123"))
	// 	printf("ft_atoi [OK] - mine: |%d|\ttheirs: |%d|\n", ft_atoi("++123"), atoi("++123"));
	// else
	// 	printf("ft_atoi [KO] - mine: |%d|\ttheirs: |%d|\n", ft_atoi("++123"), atoi("++123"));
	
	// if(ft_atoi("123abc987") == atoi("123abc987"))
	// 	printf("ft_atoi [OK] - mine: |%d|\ttheirs: |%d|\n", ft_atoi("123abc987"), atoi("123abc987"));
	// else
	// 	printf("ft_atoi [KO] - mine: |%d|\ttheirs: |%d|\n", ft_atoi("123abc987"), atoi("123abc987"));
	
	// if(ft_atoi("") == atoi(""))
	// 	printf("ft_atoi [OK] - mine: |%d|\ttheirs: |%d|\n", ft_atoi(""), atoi(""));
	// else
	// 	printf("ft_atoi [KO] - mine: |%d|\ttheirs: |%d|\n", ft_atoi(""), atoi(""));
	
	// if(ft_atoi("--99999") == atoi("--99999"))
	// 	printf("ft_atoi [OK] - mine: |%d|\ttheirs: |%d|\n", ft_atoi("--99999"), atoi("--99999"));
	// else
	// 	printf("ft_atoi [KO] - mine: |%d|\ttheirs: |%d|\n", ft_atoi("--99999"), atoi("--99999"));
	
	// if(ft_atoi("--999++99") == atoi("--999++99"))
	// 	printf("ft_atoi [OK] - mine: |%d|\ttheirs: |%d|\n", ft_atoi("--999++99"), atoi("--999++99"));
	// else
	// 	printf("ft_atoi [KO] - mine: |%d|\ttheirs: |%d|\n", ft_atoi("--999++99"), atoi("--999++99"));
	
	// if(ft_atoi("2147483647") == atoi("2147483647"))
	// 	printf("ft_atoi [OK] - mine: |%d|\ttheirs: |%d|\n", ft_atoi("2147483647"), atoi("2147483647"));
	// else
	// 	printf("ft_atoi [KO] - mine: |%d|\ttheirs: |%d|\n", ft_atoi("2147483647"), atoi("2147483647"));
	
	// if(ft_atoi("-2147483648") == atoi("-2147483648"))
	// 	printf("ft_atoi [OK] - mine: |%d|\ttheirs: |%d|\n", ft_atoi("-2147483648"), atoi("-2147483648"));
	// else
	// 	printf("ft_atoi [KO] - mine: |%d|\ttheirs: |%d|\n", ft_atoi("-2147483648"), atoi("-2147483648"));

	// if(ft_atoi("abc") == atoi("abc"))
	// 	printf("ft_atoi [OK] - mine: |%d|\ttheirs: |%d|\n", ft_atoi("abc"), atoi("abc"));
	// else
	// 	printf("ft_atoi [KO] - mine: |%d|\ttheirs: |%d|\n", ft_atoi("abc"), atoi("abc"));

	// printf("\n===============================================\n");
	// /////ft_strdup()
	// const char dup_1[] = "Humberto";
	// const char dup_2[] = "Doisberto";
	// const char dup_3[] = "";
	// char *ft_dup;
	// char *og_dup;

	// ft_dup = ft_strdup(dup_1);
	// og_dup = strdup(dup_1);
	// if (strcmp(ft_dup, og_dup) == 0)
	// 	printf("ft_strdup [OK] - mine: |%s|\ttheirs: |%s|\n", ft_dup, og_dup);
	// else
	// 	printf("ft_strdup [KO] - mine: |%s|\ttheirs: |%s|\n", ft_dup, og_dup);

	// ft_dup = ft_strdup(dup_2);
	// og_dup = strdup(dup_2);
	// if (strcmp(ft_dup, og_dup) == 0)
	// 	printf("ft_strdup [OK] - mine: |%s|\ttheirs: |%s|\n", ft_dup, og_dup);
	// else
	// 	printf("ft_strdup [KO] - mine: |%s|\ttheirs: |%s|\n", ft_dup, og_dup);

	// ft_dup = ft_strdup(dup_3);
	// og_dup = strdup(dup_3);
	// if (strcmp(ft_dup, og_dup) == 0)
	// 	printf("ft_strdup [OK] - mine: |%s|\ttheirs: |%s|\n", ft_dup, og_dup);
	// else
	// 	printf("ft_strdup [KO] - mine: |%s|\ttheirs: |%s|\n", ft_dup, og_dup);

	// printf("\n===============================================\n");
	// /////ft_calloc()
	// printf("Não sei como testar!!!\n");

	// printf("\n===============================================\n");
	// /////ft_substr()
	// const char s[] = "Tema o sangue antigo.";
	// unsigned int start = 7;
	// size_t len = 6;
	// char *ret;
	
	// ret = ft_substr(s, start, len);
	// printf("ret: |%s|\n", ret);

	// printf("\n===============================================\n");
	// /////ft_strjoin()
	// const char s1[] = "Humberto";
	// const char s2[] = "Doisberto";
	// char *ret;
	// size_t len;

	// ret = ft_strjoin(s1, s2);
	// len = ft_strlen(ret);
	// printf("ret: |%s|\tsize: |%zu|\n", ret, len);

	// printf("\n===============================================\n");
	// /////ft_strtrim()
	// const char s1[] = "bertoHumberto Arndt de Oliveiraberto";
	// const char set[] = "berto";
	// char *ret;

	// ret = ft_strtrim(s1, set);
	// printf("ret: |%s|\n", ret);

	// printf("\n===============================================\n");
	// /////ft_split()
	const char *s = {"humberto doisberto tresberto quatroberto cincoberto seisberto seteberto oitoberto"};
	const char *s2 = {"humberto!doisberto!tresberto!quatroberto!cincoberto!seisberto!seteberto!oitoberto"};
	const char *s3 = {"humberto-doisberto-tresberto-quatroberto-cincoberto-seisberto-seteberto-oitoberto"};
	char	**ft_split_ret;
	char	**ft_split_ret2;
	char	**ft_split_ret3;
	int i = 0;

	ft_split_ret = ft_split(s, ' ');
	while (ft_split_ret[i])
		printf("%s\n", ft_split_ret[i++]);
	
	printf("======\n");

	i = 0;
	ft_split_ret2 = ft_split(s2, '!');
	while (ft_split_ret2[i])
		printf("%s\n", ft_split_ret2[i++]);

	i = 0;
	ft_split_ret3 = ft_split(s3, '?');
	while (ft_split_ret3[i])
		printf("%s\n", ft_split_ret3[i++]);


	return (0);
}
