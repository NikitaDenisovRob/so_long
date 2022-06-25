/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsato <jsato@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 13:57:10 by jsato             #+#    #+#             */
/*   Updated: 2022/06/16 13:57:11 by jsato            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	a;

	a = 0;
	while (str[a] != '\0')
		a++;
	return (a);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*nstr;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	nstr = malloc(sizeof(*nstr) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!nstr)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		nstr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		nstr[i + j] = s2[j];
		j++;
	}
	nstr[i + j] = '\0';
	return (nstr);
}

char	*ret_free(char *word)
{
	if (word[0])
		return (word);
	free(word);
	return ((void *)0);
}

char	*konec(char *word, int i, int j, char *b)
{
	if (j == 0 && b[i] == '\n')
	{
		free(word);
		word = malloc(2);
		word[0] = '\n';
		word[1] = '\0';
	}
	if (word[0])
		return (word);
	free(word);
	return ((void *)0);
}

int	process_read(char *b, int *i, int fd)
{
	if (b[*i] == '\0')
		*i = rbuf(fd, b);
	if (*i == -2)
		return (1);
	return (0);
}
