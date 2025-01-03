/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpendilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 11:02:33 by mpendilh          #+#    #+#             */
/*   Updated: 2024/11/28 19:40:08 by mpendilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	get_median(t_vars *vars)
{
	int	i;

	i = -1;
	vars->max = vars->s_a[0];
	while (++i < vars->ctr_a)
	{
		if (vars->max < vars->s_a[i])
			vars->max = vars->s_a[i];
	}
	i = -1;
	vars->min = vars->s_a[0];
	while (++i < vars->ctr_a)
	{
		if (vars->min > vars->s_a[i])
			vars->min = vars->s_a[i];
	}
	vars->median = (vars->max - vars->min) / 2 + vars->min;
}

void	get_max_min_a(t_vars *vars)
{
	int	i;

	i = 0;
	vars->max = vars->s_a[0];
	vars->min = vars->s_a[0];
	while (i < vars->ctr_a)
	{
		if (vars->max <= vars->s_a[i])
		{
			vars->max = vars->s_a[i];
			vars->index_max = i;
		}
		if (vars->min >= vars->s_a[i])
		{
			vars->min = vars->s_a[i];
			vars->index_min = i;
		}
		i++;
	}
}

void	get_max_min_b(t_vars *vars)
{
	int	i;

	i = 0;
	vars->max = vars->s_b[0];
	vars->min = vars->s_b[0];
	while (i < vars->ctr_b)
	{
		if (vars->max <= vars->s_b[i])
		{
			vars->max = vars->s_b[i];
			vars->index_max = i;
		}
		if (vars->min >= vars->s_b[i])
		{
			vars->min = vars->s_b[i];
			vars->index_min = i;
		}
		i++;
	}
}
