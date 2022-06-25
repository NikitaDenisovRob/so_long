/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map_string_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsato <jsato@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 14:06:55 by jsato             #+#    #+#             */
/*   Updated: 2022/06/16 14:06:56 by jsato            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

void	ft_check_map_string(t_game *game, char *line)
{
	int	i;

	i = 0;
	if (line[i] == '\0' || line[i] == '\n')
	{
		free(line);
		ft_error_handler(game, "Error\nINVALID_MAP", mlx);
	}
	while (line[i])
	{
		if (line[i] == '\n' && line[i + 1] != '1')
		{
			free(line);
			ft_error_handler(game, "Error\nINVALID_MAP", mlx);
		}
		i++;
	}
}
