/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsato <jsato@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 14:02:35 by jsato             #+#    #+#             */
/*   Updated: 2022/06/16 14:02:36 by jsato            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"	

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;

	if (!s)
		return (NULL);
	if ((ft_strlen (s)) < start)
		len = 0;
	if (ft_strlen(s) + start < len)
		len = ft_strlen(s + start);
	res = malloc (len + 1);
	if (!res)
		return (0);
	ft_strlcpy (res, s + start, len + 1);
	return (res);
}
