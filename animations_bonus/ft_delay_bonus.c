/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delay_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsato <jsato@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 13:56:59 by jsato             #+#    #+#             */
/*   Updated: 2022/06/16 13:57:01 by jsato            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

void	ft_delay(int ms)
{
	unsigned long	pause;
	clock_t			now;
	clock_t			then;

	pause = ms * (CLOCKS_PER_SEC / 1000);
	then = clock();
	now = then;
	while ((now - then) < pause)
		now = clock();
}
