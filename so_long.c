/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsato <jsato@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 14:07:56 by jsato             #+#    #+#             */
/*   Updated: 2022/06/16 14:07:57 by jsato            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **argv)
{
	char	*check_map;
	t_game	game;

	ft_check_name(argc, argv, &game);
	game.mlx = mlx_init();
	check_map = ft_check_map(&game);
	game.lines.map = ft_split(check_map, '\n');
	free(check_map);
	ft_check_verification_map(&game);
	game.win = mlx_new_window(game.mlx, ((game.lines.x_len + 1) * IMG),
			((game.lines.y_len + 1) * IMG), "./so_long");
	ft_draft(&game);
	ft_init_map(&game);
	mlx_key_hook(game.win, &ft_key_input, &game);
	mlx_hook(game.win, X_DESTROY, (0L), &ft_close_window, &game);
	mlx_hook(game.win, X_EXPOSE, (1L << 15), &ft_move_window, &game);
	mlx_loop(game.mlx);
	return (0);
}
