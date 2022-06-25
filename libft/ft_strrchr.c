/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsato <jsato@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 14:02:26 by jsato             #+#    #+#             */
/*   Updated: 2022/06/16 14:02:27 by jsato            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ps;

	i = 0;
	ps = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			(ps = ((char *)s + i));
		i++;
	}
	if (ps)
		return (ps);
	if (c == s[i])
		return ((char *)s + i);
	return (NULL);
}
