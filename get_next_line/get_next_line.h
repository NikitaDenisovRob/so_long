/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsato <jsato@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 13:57:27 by jsato             #+#    #+#             */
/*   Updated: 2022/06/16 13:57:28 by jsato            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

# define BUFFER_SIZE 10

size_t	ft_strlen(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
char	*get_next_line(int fd);
int		rbuf(int fd, char *b);
char	*ret_free(char *word);
char	*konec(char *word, int i, int j, char *b);
char	*nterm(void);
char	*stj(char *word, char *word2, int j);
int		nachalo(int i, char *b, int *j);
int		process_read(char *b, int *i, int fd);

#endif