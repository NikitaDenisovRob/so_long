/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_handler_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsato <jsato@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 14:07:11 by jsato             #+#    #+#             */
/*   Updated: 2022/06/16 14:07:12 by jsato            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

void	ft_error_handler(t_game *game, char *str, int sweep)

{
	if (sweep == clean)
	{
		printf(CRED"%s\n", str);
		ft_free_game(game);
		exit(EXIT_FAILURE);
	}
	else if (sweep == mlx)
	{
		printf(CRED"%s\n", str);
		exit(EXIT_FAILURE);
	}
	if (sweep == map)
	{
		printf(CRED"%s\n", str);
		ft_free_map_game(game);
		exit(EXIT_FAILURE);
	}
	printf(CRED"%s\n", str);
	exit(EXIT_FAILURE);
}
