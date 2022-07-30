/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maind.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfallahi <mfallahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 02:56:34 by mfallahi          #+#    #+#             */
/*   Updated: 2022/01/20 04:54:21 by mfallahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ac2(struct s_tack *pta, struct s_tack *ptb, char **str, char **av)
{
	int	i;

	i = -1;
	str = ft_split(av[1], ' ');
	pta = init(sizeav(str), pta);
	ptb = init(sizeav(str), ptb);
	while (str[++i])
		push(pta, ft_atoi(str[i]));
	ffree(str);
}

void	ffree(char **str)
{
	int	i;

	i = -1;
	while (str[++i])
		free(str[i]);
	free(str);
}

void	mainsort(struct s_tack *pta, struct s_tack *ptb)
{
	if (pta->size <= 5)
		push_min(pta, ptb);
	else
	{
		ft_sort1(pta, ptb);
		ft_sort2(pta, ptb);
	}
	free(pta->items);
	free(pta);
	free(ptb->items);
	free(ptb);
}
