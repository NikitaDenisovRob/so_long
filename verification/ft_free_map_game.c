/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_map_game.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsato <jsato@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 14:06:32 by jsato             #+#    #+#             */
/*   Updated: 2022/06/16 14:06:33 by jsato            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_free_map_game(t_game *game)
{
	int	y_num;

	y_num = 0;
	while (game->lines.map[y_num])
	{
		free(game->lines.map[y_num]);
		y_num++;
	}
	free(game->lines.map);
}
