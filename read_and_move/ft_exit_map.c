/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsato <jsato@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 14:04:00 by jsato             #+#    #+#             */
/*   Updated: 2022/06/16 14:04:01 by jsato            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_exit_map(t_game *game)
{
	if (game->lines.map[(game->player.y / IMG)][(game->player.x / IMG)] == 'E')
	{
		printf(SUCCESS"\nYOU_WIN!\n"RESET);
		ft_free_game(game);
		exit(EXIT_SUCCESS);
	}
}
