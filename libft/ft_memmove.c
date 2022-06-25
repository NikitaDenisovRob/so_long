/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsato <jsato@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 13:59:45 by jsato             #+#    #+#             */
/*   Updated: 2022/06/16 13:59:46 by jsato            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dst;
	char	*str;
	size_t	i;

	dst = (char *)dest;
	str = (char *)src;
	i = 0;
	if (dst == 0 && str == 0)
		return (dst);
	if (dst > str)
	{
		while (n--)
			dst[n] = str[n];
	}
	else if (dst < str)
	{
		while (i < n)
		{
			dst[i] = str[i];
			i++;
		}
	}
	return (dst);
}
