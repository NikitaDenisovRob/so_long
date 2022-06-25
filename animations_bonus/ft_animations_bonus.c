/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_animations_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsato <jsato@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 13:56:47 by jsato             #+#    #+#             */
/*   Updated: 2022/06/16 13:56:50 by jsato            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

int	ft_animations(t_game *game)
{
	if (game->key_enemy == 0 || game->key_enemy == 10)
	{
		ft_animate_enemy(game);
		ft_move_enemy(game);
	}
	ft_animate_player(game);
	return (0);
}
