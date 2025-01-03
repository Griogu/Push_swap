/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   duplicate_is_sort.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpendilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 15:30:28 by mpendilh          #+#    #+#             */
/*   Updated: 2024/12/01 17:03:40 by mpendilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	is_sort(t_vars *vars)
{
	int	i;
	int	j;

	i = 0;
	while (i < vars->ctr_a)
	{
		j = 0;
		while (j < vars->ctr_a - 1)
		{
			if (vars->s_a[j] > vars->s_a[j + 1])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	duplicate(t_vars *vars)
{
	int	i;
	int	j;

	i = 0;
	while (i < vars->ctr_a)
	{
		j = 0;
		while (j < vars->ctr_a - 1)
		{
			if (j == i)
				j++;
			if (vars->s_a[i] == vars->s_a[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
