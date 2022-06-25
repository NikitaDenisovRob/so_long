/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsato <jsato@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 14:04:05 by jsato             #+#    #+#             */
/*   Updated: 2022/06/16 14:13:40 by jsato            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static void	ft_pars_walls(t_game *game, int y_num, int x_num)
{
	mlx_put_image_to_window(game->mlx, game->win, game->wall.ptr,
		(IMG * x_num), (IMG * y_num));
}

static void	ft_player_position(t_game *game, int y_num, int x_num)
{
	game->player.x = (x_num * IMG);
	game->player.y = (y_num * IMG);
	mlx_put_image_to_window(game->mlx, game->win, game->player.p.ptr,
		(IMG * x_num), (IMG * y_num));
}

static void	ft_check_collection_exit(t_game *game, int y_num, int x_num)
{
	if (!game->lines.collection)
		mlx_put_image_to_window(game->mlx, game->win, game->exit_o.ptr,
			(IMG * x_num), (IMG * y_num));
	else
		mlx_put_image_to_window(game->mlx, game->win, game->exit_c.ptr,
			(IMG * x_num), (IMG * y_num));
}

static void	ft_parse_line(t_game *game, int y_num, int x_num)
{
	static int	count;

	if (game->lines.map[y_num][x_num] == '1')
		ft_pars_walls(game, y_num, x_num);
	else if (game->lines.map[y_num][x_num] == 'P' && !count)
	{
		ft_player_position(game, y_num, x_num);
		count++;
	}
	else if (game->lines.map[y_num][x_num] == 'C')
		mlx_put_image_to_window(game->mlx, game->win, game->key.ptr,
			(IMG * x_num), (IMG * y_num));
	else if (game->lines.map[y_num][x_num] == 'E')
		ft_check_collection_exit(game, y_num, x_num);
	else
		mlx_put_image_to_window(game->mlx, game->win, game->floor.ptr,
			(IMG * x_num), (IMG * y_num));
}

void	ft_init_map(t_game *game)
{
	int	y_num;
	int	x_num;

	y_num = 0;
	while (game->lines.map[y_num])
	{
		x_num = 0;
		while (game->lines.map[y_num][x_num])
		{
			ft_parse_line(game, y_num, x_num);
			x_num++;
		}
		y_num++;
	}
}
