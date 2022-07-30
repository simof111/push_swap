/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfallahi <mfallahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 01:22:27 by mfallahi          #+#    #+#             */
/*   Updated: 2022/01/20 04:53:32 by mfallahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*get_next_line(int fd)
{
	char	str[8000000];
	int		i;
	char	buff[1];
	int		byte;

	byte = read(fd, buff, 1);
	i = 0;
	while (byte > 0)
	{
		str[i++] = buff[0];
		if (buff[0] == '\n')
			break ;
		byte = read(fd, buff, 1);
	}
	str[i] = '\0';
	if (str[0] == '\0')
		return (0);
	return (ft_strdup(str));
}

void	checker_2(struct s_tack *pta, struct s_tack *ptb, char *str)
{
	if (!ft_strcmp("pa\n", str))
		pa(pta, ptb, "0");
	else if (!ft_strcmp("rrr\n", str))
		rrr(pta, ptb, "0");
	else if (!ft_strcmp("ss\n", str))
		ss(pta, ptb, "0");
	else if (!ft_strcmp("rr\n", str))
		rr(pta, ptb, "0");
	else
		ft_putstr("Error\n");
}

void	checker(struct s_tack *pta, struct s_tack *ptb)
{
	char	*str;

	str = get_next_line(0);
	while (str)
	{
		if (!ft_strcmp("rra\n", str))
			rev_rotate(pta, "0");
		else if (!ft_strcmp("ra\n", str))
			rotate(pta, "0");
		else if (!ft_strcmp("sa\n", str))
			swt(pta, "0");
		else if (!ft_strcmp("rrb\n", str))
			rev_rotate(ptb, "0");
		else if (!ft_strcmp("rb\n", str))
			rotate(ptb, "0");
		else if (!ft_strcmp("sb\n", str))
			swt(ptb, "0");
		else if (!ft_strcmp("pb\n", str))
			pb (ptb, pta, "0");
		else
			checker_2(pta, ptb, str);
		str = get_next_line(0);
	}
}

void	ac3(struct s_tack *pta, struct s_tack *ptb, int ac, char **av)
{
	int	i;

	i = 0;
	pta = init(ac - 1, pta);
	ptb = init(ac - 1, ptb);
	while (++i < ac)
		push(pta, ft_atoi(av[i]));
}

int	main(int ac, char **av)
{
	char			**str;
	struct s_tack	*pta;
	struct s_tack	*ptb;

	str = NULL;
	pta = (struct s_tack *)malloc(sizeof(struct s_tack));
	ptb = (struct s_tack *)malloc(sizeof(struct s_tack));
	if (!maincheck(ac, av))
		return (0);
	if (ac == 2)
		ac2(pta, ptb, str, av);
	if (ac > 2)
		ac3(pta, ptb, ac, av);
	if (issorted(pta))
		return (0);
	checker(pta, ptb);
	if (issorted(pta) && isempty(ptb))
	{
		ft_putstr("OK");
		return (0);
	}
	ffree1(str, pta, ptb);
	return (1);
}
