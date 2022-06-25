/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_moves_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsato <jsato@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 14:05:25 by jsato             #+#    #+#             */
/*   Updated: 2022/06/16 14:05:26 by jsato            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

void	ft_print_moves(t_game *game)
{
	static int	temp_move;
	char		*move;
	char		*last_move;

	move = ft_itoa(game->player.moves);
	if (move[0] == '0')
		free(move);
	mlx_string_put(game->mlx, game->win, POS_X_STR,
		POS_Y, STR_COLOR, "Moves:");
	if (game->player.moves > 0)
	{
		temp_move = game->player.moves;
		mlx_string_put(game->mlx, game->win, POS_X,
			POS_Y, STR_COLOR, move);
		free (move);
	}
	last_move = ft_itoa(temp_move);
	mlx_string_put(game->mlx, game->win, POS_X,
		POS_Y, STR_COLOR, last_move);
	free(last_move);
}
