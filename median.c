/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   median.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfallahi <mfallahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:05:59 by mfallahi          #+#    #+#             */
/*   Updated: 2022/01/19 20:10:46 by mfallahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	cpy(int ar[], struct s_tack *pt)
{
	int	i;

	i = -1;
	while (++i < pt->size)
		ar[i] = pt->items[i];
}

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_fugazi_sort(int array[], int n)
{
	int	i;
	int	j;

	i = 0;
	while (i < n)
	{
		j = i + 1;
		while (j < n)
		{
			if (array[i] > array[j])
				swap(&array[i], &array[j]);
			j++;
		}
		i++;
	}
}

int	median(struct s_tack *pt)
{
	int	*array;
	int	md;

	array = malloc(sizeof(int) * pt->size);
	cpy(array, pt);
	ft_fugazi_sort(array, pt->size);
	md = array[pt->size / 5];
	free(array);
	return (md);
}

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
