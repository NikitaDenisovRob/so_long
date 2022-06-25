/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_handler.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsato <jsato@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 14:06:20 by jsato             #+#    #+#             */
/*   Updated: 2022/06/16 14:06:21 by jsato            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

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
	else if (sweep == map)
	{
		printf(CRED"%s\n", str);
		ft_free_map_game(game);
		exit(EXIT_FAILURE);
	}
	printf(CRED"%s\n", str);
	exit(EXIT_FAILURE);
}
