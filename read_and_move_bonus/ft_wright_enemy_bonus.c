/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wright_enemy_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsato <jsato@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 14:05:32 by jsato             #+#    #+#             */
/*   Updated: 2022/06/16 14:05:33 by jsato            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

static void	ft_check_enemy(t_game *game, int y_num, int x_num)
{
	if (game->lines.map[y_num][x_num] == 'C'
	&& game->lines.map[y_num][x_num + 1] == '0'
	&& game->lines.map[y_num][x_num + 2] == '0'
	&& game->lines.map[y_num][x_num + 3] == '0')
	{
		game->lines.enemy++;
		game->lines.map[y_num][x_num + 1] = 'Y';
	}
	else if (game->lines.map[y_num][x_num] == 'C'
	&& game->lines.map[y_num][x_num - 1] == '0'
	&& game->lines.map[y_num][x_num - 2] == '0'
	&& game->lines.map[y_num][x_num - 3] == '0')
	{
		game->lines.enemy++;
		game->lines.map[y_num][x_num - 1] = 'Y';
	}
}

void	ft_wright_enemy(t_game *game)
{
	int	y_num;
	int	x_num;

	y_num = 0;
	game->lines.enemy = 0;
	while (game->lines.map[y_num])
	{
		x_num = 0;
		while (game->lines.map[y_num][x_num])
		{
			ft_check_enemy(game, y_num, x_num);
			if (game->lines.enemy == 1)
				break ;
			x_num++;
		}
		y_num++;
	}
}
