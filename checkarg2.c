/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkarg2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfallahi <mfallahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:34:42 by mfallahi          #+#    #+#             */
/*   Updated: 2022/01/19 21:28:29 by mfallahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	only_nb(char **ar, int i)
{
	int	j;

	while (ar[++i])
	{
		j = 0;
		while (ar[i][j])
		{
			if (ft_isdigit(ar[i][j])
				|| (ar[i][j] == '-' && ft_isdigit(ar[i][j + 1]))
					|| (ar[i][j] == '+' && ft_isdigit(ar[i][j + 1])))
				j++;
			else
				return (0);
		}
	}
	return (1);
}

int	sizeav(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	pos(struct s_tack *ptb, int tg)
{
	int	i;

	i = 0;
	while (ptb->items[i] != tg)
		i++;
	return (i);
}

int	maincheck(int ac, char **av)
{
	char	**str;

	if (ac > 1)
	{
		if (ac == 2)
		{
			str = ft_split(av[1], ' ');
			if (!check_double(str, -1) || !only_nb(str, -1)
				|| !maxint(str, -1))
			{
				ffree(str);
				ft_putstr("Error");
				return (0);
			}
			ffree(str);
		}
		else if (!ch(av, ac, 0, 0) || !only_nb(av, 0) || !maxint(av, 0))
		{
			ft_putstr("Error");
			return (0);
		}
		return (1);
	}
	return (0);
}
