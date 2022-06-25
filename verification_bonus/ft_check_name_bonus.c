/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_name_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsato <jsato@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 14:07:00 by jsato             #+#    #+#             */
/*   Updated: 2022/06/16 14:07:01 by jsato            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

static int	ft_name_map(char *argv)
{
	size_t	res;
	char	*serch;

	serch = ".ber";
	res = ft_strlen(ft_strchr(argv, serch[0]));
	if (res != 4)
		return (1);
	else
		return (0);
}

void	ft_check_name(int argc, char **argv, t_game *game)
{
	if (argc == 2 && !(ft_name_map(argv[1])))
		game->map_name = argv[1];
	else if (argc < 2)
		ft_error_handler(game, "Error\nNO_MAP", leave);
	else
	{
		if (ft_name_map(argv[1]))
			ft_error_handler(game, "Error\nINVALID_MAP_EXTENSION", leave);
		else
			ft_error_handler(game, "Error\nINVALID_NUM_ARGUMENTS", leave);
	}
}
