/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   more_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfallahi <mfallahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:13:57 by mfallahi          #+#    #+#             */
/*   Updated: 2022/01/20 04:42:34 by mfallahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(struct s_tack *pta, struct s_tack *ptb, char *s)
{
	swt(pta, "");
	swt(ptb, "");
	ft_putstr(s);
}

void	rr(struct s_tack *pta, struct s_tack *ptb, char *s)
{
	rotate(pta, "");
	rotate(ptb, "");
	ft_putstr(s);
}

void	rrr(struct s_tack *pta, struct s_tack *ptb, char *s)
{
	rev_rotate(pta, "");
	rev_rotate(ptb, "");
	ft_putstr(s);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	if (str[++i] != '0')
	{
		while (str[i])
			ft_putchar(str[i++]);
		if (len(str))
			ft_putchar('\n');
	}
}
