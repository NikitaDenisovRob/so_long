/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsato <jsato@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 13:57:17 by jsato             #+#    #+#             */
/*   Updated: 2022/06/16 13:57:18 by jsato            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	rbuf(int fd, char *b)
{
	int	count;

	count = read(fd, b, BUFFER_SIZE);
	if (count <= 0)
		return (-2);
	b[count] = '\0';
	return (0);
}

char	*nterm(void)
{
	char	*loc;

	loc = malloc(1);
	loc[0] = '\0';
	return (loc);
}

char	*stj(char *word, char *word2, int j)
{
	char	*strj;

	word2[j] = '\0';
	strj = ft_strjoin(word, word2);
	free(word);
	free(word2);
	return (strj);
}

int	nachalo(int i, char *b, int *j)
{
	*j = 0;
	if (b[i] == '\n')
		return (1);
	return (0);
}

char	*get_next_line(int fd)
{
	static char	b[BUFFER_SIZE + 1];
	char		*word;
	char		*word2;
	static int	i;
	int			j;

	word = nterm();
	i += nachalo(i, b, &j);
	while (b[i] != '\n')
	{
		if (process_read(b, &i, fd) == 1)
			return (ret_free(word));
		while (b[i + j] && b[i + j] != '\n')
			j++;
		word2 = malloc(j + 1 + (b[i + j]));
		if (*word2 == '\n')
			return (ret_free(word));
		j = 0;
		while (b[i] && b[i] != '\n')
			word2[j++] = b[i++];
		if (b[i] == '\n')
			word2[j++] = '\n';
		word = stj(word, word2, j);
	}
	return (konec(word, i, j, b));
}
