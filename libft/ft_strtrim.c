/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsato <jsato@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 14:02:30 by jsato             #+#    #+#             */
/*   Updated: 2022/06/16 14:02:31 by jsato            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	exs(char const whr, char const *wht)
{
	int	i;

	i = 0;
	while (wht[i])
	{
		if (whr == wht[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*fsh;
	size_t		i;
	size_t		j;
	size_t		k;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (exs(s1[i], set))
		i++;
	j = ft_strlen(s1);
	while (i <= j && exs(s1[j - 1], set))
		j--;
	fsh = malloc(sizeof(*fsh) * (j - i + 1));
	if (fsh == NULL)
		return (NULL);
	k = 0;
	while (i < j)
	{
		fsh[k] = s1[i];
		i++;
		k++;
	}
	fsh[k] = '\0';
	return (fsh);
}
