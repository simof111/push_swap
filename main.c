/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfallahi <mfallahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:07:30 by mfallahi          #+#    #+#             */
/*   Updated: 2022/01/20 04:56:30 by mfallahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	char			**str;
	int				i;
	struct s_tack	*pta;
	struct s_tack	*ptb;

	pta = (struct s_tack *)malloc(sizeof(struct s_tack));
	ptb = (struct s_tack *)malloc(sizeof(struct s_tack));
	str = NULL;
	if (!maincheck(ac, av))
		return (0);
	if (ac == 2)
		ac2(pta, ptb, str, av);
	if (ac > 2)
	{
		i = 0;
		pta = init(ac - 1, pta);
		ptb = init(ac - 1, ptb);
		while (++i < ac)
			push(pta, ft_atoi(av[i]));
	}
	mainsort(pta, ptb);
	return (1);
}
