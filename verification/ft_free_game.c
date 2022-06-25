/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_game.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsato <jsato@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 14:06:27 by jsato             #+#    #+#             */
/*   Updated: 2022/06/16 14:06:28 by jsato            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static void	ft_free_map_utils_img(t_game *game)
{
	mlx_destroy_image(game->mlx, game->wall.ptr);
	mlx_destroy_image(game->mlx, game->exit_c.ptr);
	mlx_destroy_image(game->mlx, game->exit_o.ptr);
	mlx_destroy_image(game->mlx, game->key.ptr);
	mlx_destroy_image(game->mlx, game->floor.ptr);
}

void	ft_free_game(t_game *game)
{
	ft_free_map_utils_img(game);
	mlx_destroy_image(game->mlx, game->player.p.ptr);
	ft_free_map_game(game);
	mlx_destroy_window(game->mlx, game->win);
}
