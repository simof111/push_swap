/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   md.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfallahi <mfallahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:03:42 by mfallahi          #+#    #+#             */
/*   Updated: 2022/01/19 19:36:07 by mfallahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	md1(int md, struct s_tack *pta, struct s_tack *ptb)
{
	while (md > pta->items[0])
		pb(ptb, pta, "pb");
}

void	md2(int md, struct s_tack *pta)
{
	while (md > pta->items[pta->size - 1])
		rev_rotate(pta, "rra");
}

void	md3(int md, struct s_tack *pta)
{
	while (md <= pta->items[0] && !fdr(pta, md))
		rotate(pta, "ra");
}
