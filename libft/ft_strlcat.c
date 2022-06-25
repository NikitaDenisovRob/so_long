/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsato <jsato@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 14:01:54 by jsato             #+#    #+#             */
/*   Updated: 2022/06/16 14:01:55 by jsato            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	a;
	size_t	b;
	size_t	res;

	a = 0;
	b = 0;
	res = 0;
	while (dst[a])
		a++;
	while (src[res])
		res++;
	if (dstsize <= a)
		res += dstsize;
	else
		res += a;
	while (src[b] && (a + 1) < dstsize)
	{
		dst[a] = src[b];
		a++;
		b++;
	}
	dst[a] = '\0';
	return (res);
}
