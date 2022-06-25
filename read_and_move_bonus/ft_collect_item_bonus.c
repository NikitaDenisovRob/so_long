/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collect_item_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsato <jsato@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 14:04:38 by jsato             #+#    #+#             */
/*   Updated: 2022/06/16 14:04:39 by jsato            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

void	ft_collect_item(t_game *game)
{
	if (game->lines.map[(game->player.y / IMG)][(game->player.x / IMG)] != 'C')
		return ;
	game->lines.map[(game->player.y / IMG)][(game->player.x / IMG)] = '0';
	game->lines.collection--;
}
