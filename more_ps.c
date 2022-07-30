/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   more_ps.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfallahi <mfallahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:26:26 by mfallahi          #+#    #+#             */
/*   Updated: 2022/01/19 19:36:28 by mfallahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	max_lc(struct s_tack *pt)
{
	int	i;
	int	max;

	i = -1;
	max = pt->items[0];
	while (++i < pt->size)
		if (max < pt->items[i])
			max = pt->items[i];
	return (max);
}

int	min(struct s_tack *pt)
{
	int	i;
	int	min;

	i = -1;
	min = pt->items[0];
	while (++i < pt->size)
		if (min > pt->items[i])
			min = pt->items[i];
	return (min);
}
