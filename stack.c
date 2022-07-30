/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfallahi <mfallahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:49:27 by mfallahi          #+#    #+#             */
/*   Updated: 2022/01/19 19:38:04 by mfallahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swt(struct s_tack *pt, char *str)
{
	int	tmp;

	if (pt->size >= 2)
	{
		tmp = pt->items[0];
		pt->items[0] = pt->items[1];
		pt->items[1] = tmp;
		ft_putstr(str);
	}
}

void	pa(struct s_tack *pta, struct s_tack *ptb, char *str)
{
	int	tmp;
	int	i;
	int	j;

	if (!isempty(ptb))
	{
		j = -1;
		i = 0;
		tmp = ptb->items[0];
		while (++i < ptb->size)
			ptb->items[++j] = ptb->items[i];
		ptb->size--;
		pta->size++;
		i = pta->size;
		while (--i)
			pta->items[i] = pta->items[i - 1];
		pta->items[0] = tmp;
		ft_putstr(str);
	}
}

void	pb(struct s_tack *ptb, struct s_tack *pta, char *str)
{
	int	tmp;
	int	i;

	if (!isempty(pta))
	{
		i = -1;
		tmp = pta->items[0];
		while (++i < pta->size)
			pta->items[i] = pta->items[i + 1];
		pta->size--;
		ptb->size++;
		i = ptb->size;
		while (--i)
			ptb->items[i] = ptb->items[i - 1];
		ptb->items[0] = tmp;
		ft_putstr(str);
	}
}

void	rev_rotate(struct s_tack *pt, char *str)
{
	int	tmp;
	int	i;

	if (!isempty(pt))
	{
		i = pt->size;
		tmp = pt->items[pt->size - 1];
		while (--i)
		{
			pt->items[i] = pt->items[i - 1];
		}
		pt->items[0] = tmp;
		ft_putstr(str);
	}
}

void	rotate(struct s_tack *pt, char *str)
{
	int	tmp;
	int	i;

	if (!isempty(pt))
	{
		tmp = pt->items[0];
		i = -1;
		while (++i < pt->size)
			pt->items[i] = pt->items[i + 1];
		pt->items[pt->size - 1] = tmp;
		ft_putstr(str);
	}
}
