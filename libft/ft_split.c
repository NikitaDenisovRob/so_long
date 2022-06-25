/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsato <jsato@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 14:00:27 by jsato             #+#    #+#             */
/*   Updated: 2022/06/16 14:00:28 by jsato            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word(const char *str, char c)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	while (str[++i])
	{
		if (str[i] != c && (str[i + 1] == c || str [i + 1] == '\0'))
			j++;
	}
	return (j);
}

static int	ft_len(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != c && str[i] != '\0')
		i++;
	return (i);
}

static void	*ft_leaks(char **res, int s)
{
	int	i;

	i = 0;
	while (i < s)
	{
		free(res[i]);
		i++;
	}
	free(res);
	return (NULL);
}

static char	**ft_str(const char *str, char c, char **res, int s)
{
	int		i;
	int		j;
	int		ln;

	i = -1;
	while (++i < s)
	{
		while (*str == c)
			str++;
		ln = ft_len(str, c);
		res[i] = malloc(ln + 1);
		if (!res[i])
			return (ft_leaks(res, i));
		j = 0;
		while (j < ln)
			res[i][j++] = *str++;
		res[i][j] = '\0';
	}
	res[i] = 0;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**r;
	int		str;

	if (!s)
		return (0);
	str = ft_word(s, c);
	r = (char **)malloc(sizeof(char *) * (str + 1));
	if (!r)
		return (0);
	r = ft_str(s, c, r, str);
	return (r);
}
