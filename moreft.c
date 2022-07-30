/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moreft.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfallahi <mfallahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:53:09 by mfallahi          #+#    #+#             */
/*   Updated: 2022/01/19 19:36:41 by mfallahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	fdr(struct s_tack *pta, int md)
{
	int	i;

	i = -1;
	while (++i < pta->size)
	{
		if (md > pta->items[i])
			return (0);
	}
	return (1);
}

int	search(struct s_tack *pt, int sr, int end)
{
	int	i;

	i = -1;
	while (pt->items[++i] != end)
		if (sr == pt->items[i])
			return (0);
	return (1);
}

int	search_lc(struct s_tack *pt, int sr)
{
	int	i;

	i = -1;
	while (++i < pt->size)
		if (sr == pt->items[i])
			return (0);
	return (1);
}
