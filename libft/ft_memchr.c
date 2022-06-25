/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsato <jsato@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 13:59:26 by jsato             #+#    #+#             */
/*   Updated: 2022/06/16 13:59:27 by jsato            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	pp;

	i = 0;
	pp = (unsigned char)c;
	p = (unsigned char *)s;
	while (i < n)
	{
		if (p[i] == pp)
			return ((void *)&p[i]);
		i++;
	}
	return (NULL);
}
