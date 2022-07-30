/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfallahi <mfallahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:20:43 by mfallahi          #+#    #+#             */
/*   Updated: 2022/01/19 19:36:49 by mfallahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

struct s_tack	*init(int cp, struct s_tack *pt)
{
	pt->size = 0;
	pt->maxsize = cp;
	pt->items = (int *)malloc(sizeof(int) * cp);
	return (pt);
}

int	isempty(struct s_tack *pt)
{
	if (pt->size == 0)
		return (1);
	return (0);
}

void	push(struct s_tack *pt, int nv)
{
	pt->items[pt->size] = nv;
	pt->size++;
}

int	issorted(struct s_tack *pt )
{
	int	i;

	i = -1;
	while (++i < pt->size - 1)
		if (pt->items[i] >= pt->items[i + 1])
			return (0);
	return (1);
}

int	max(struct s_tack *pt, int end)
{
	int	i;
	int	max;

	i = -1;
	max = pt->items[0];
	while (pt->items[++i] != end)
		if (max < pt->items[i])
			max = pt->items[i];
	return (max);
}
