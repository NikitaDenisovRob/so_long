/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsato <jsato@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 13:59:39 by jsato             #+#    #+#             */
/*   Updated: 2022/06/16 13:59:40 by jsato            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	const char	*b1;
	char		*b2;

	b2 = dst;
	b1 = src;
	i = 0;
	if (src == NULL && dst == NULL)
		return (NULL);
	while (i < n)
	{
		b2[i] = b1[i];
		i++;
	}
	return (dst);
}
