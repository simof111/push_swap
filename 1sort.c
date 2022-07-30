/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1sort.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfallahi <mfallahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 19:31:39 by mfallahi          #+#    #+#             */
/*   Updated: 2022/01/19 19:35:00 by mfallahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pushmin(struct s_tack *pta, struct s_tack *ptb)
{
	int	m;

	while (pta->size > 2)
	{
		m = min(pta);
		if (pta->items[0] == m)
			pb(ptb, pta, "pb");
		rotate(pta, "ra");
	}
}

void	ft_sort1(struct s_tack *pta, struct s_tack *ptb)
{
	int	md;
	int	wh;

	wh = 1;
	if (issorted(pta))
		return ;
	while (pta->size > 5)
	{
		md = median(pta);
		wh = 1;
		while (wh && !fdr(pta, md))
		{
			md1(md, pta, ptb);
			md2(md, pta);
			md3(md, pta);
			if (fdr(pta, md))
				wh = 0;
		}
	}
	pushmin(pta, ptb);
	if (!issorted(pta))
		swt(pta, "sa");
}

void	pa_ra(struct s_tack *ptb, struct s_tack *pta, int tg, char *str)
{
	while (search_lc(ptb, tg) == 0)
	{
		if (ptb->items[0] == tg)
			pa(pta, ptb, "pa");
		rotate(ptb, str);
	}
}

void	pa_rra(struct s_tack *ptb, struct s_tack *pta, int tg, char *str)
{
	while (search_lc(ptb, tg) == 0)
	{
		if (ptb->items[0] == tg)
			pa(pta, ptb, "pa");
		rev_rotate(ptb, str);
	}
}

void	ft_sort2(struct s_tack *pta, struct s_tack *ptb)
{
	int	tg;
	int	demlen;
	int	v;

	if (issorted(pta) && isempty(ptb))
		return ;
	while (ptb->size)
	{
		tg = max_lc(ptb);
		demlen = ptb->size / 2;
		v = pos(ptb, tg);
		if (v <= demlen)
			pa_ra(ptb, pta, tg, "rb");
		else
			pa_rra(ptb, pta, tg, "rrb");
	}
}
