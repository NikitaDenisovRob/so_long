/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsato <jsato@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 14:01:59 by jsato             #+#    #+#             */
/*   Updated: 2022/06/16 14:02:00 by jsato            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	j;

	j = 0;
	if (dstsize > 0)
	{
		while (src[j] && j < dstsize - 1)
		{
			dst[j] = src[j];
			j++;
		}
		dst[j] = 0;
	}
	return (ft_strlen(src));
}
