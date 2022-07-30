/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfallahi <mfallahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:27:33 by mfallahi          #+#    #+#             */
/*   Updated: 2022/01/19 19:36:59 by mfallahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb_rra(struct s_tack *ptb, struct s_tack *pta, int tg, char *str)
{
	while (search_lc(pta, tg) == 0)
	{
		if (pta->items[0] == tg)
			pb(ptb, pta, "pb");
		rev_rotate(pta, str);
	}
}

void	pb_ra(struct s_tack *ptb, struct s_tack *pta, int tg, char *str)
{
	while (search_lc(pta, tg) == 0)
	{
		if (pta->items[0] == tg)
			pb(ptb, pta, "pb");
		rotate(pta, str);
	}
}

void	push_min(struct s_tack *pta, struct s_tack *ptb)
{
	int	m;
	int	dm;
	int	p;

	if (issorted(pta))
		return ;
	while (pta->size != 3)
	{
		m = min(pta);
		dm = pta->size / 2;
		p = pos(pta, m);
		if (p < dm)
			pb_ra(ptb, pta, m, "ra");
		else
			pb_rra(ptb, pta, m, "rra");
	}
	if (pta->items[0] > pta->items[1] && pta->items[0] > pta->items[2]
		&& pta->items[2] > pta->items[1])
		rev_rotate(pta, "rra");
	sort_3(pta, ptb);
}

void	sort_3(struct s_tack *pta, struct s_tack *ptb)
{
	int	m;

	if (pta->items[0] > pta->items[1] && pta->items[0] > pta->items[2]
		&& pta->items[1] > pta->items[2])
	{
		rotate(pta, "ra");
		swt(pta, "sa");
	}
	else if (pta->items[0] < pta->items[1] && pta->items[0] < pta->items[2]
		&& pta->items[2] < pta->items[1])
	{
		rev_rotate(pta, "rra");
		swt(pta, "sa");
	}
	else if (pta->items[0] > pta->items[1] && pta->items[0] < pta->items[2]
		&& pta->items[2] > pta->items[1])
		swt(pta, "sa");
	else if (pta->items[0] < pta->items[1] && pta->items[0] > pta->items[2]
		&& pta->items[2] < pta->items[1])
		rev_rotate(pta, "rra");
	m = ptb->size;
	while (m--)
		pa(ptb, pta, "pa");
}
