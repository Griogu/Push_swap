/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpendilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 11:08:01 by mpendilh          #+#    #+#             */
/*   Updated: 2024/12/03 18:47:24 by mpendilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

static void	push_in_b_second_part(t_vars *vars, int i, int counter_a)
{
	i = 0;
	counter_a = vars->ctr_a;
	while (i < counter_a)
	{
		if (vars->s_a[0] <= vars->max / 5 * 4 + vars->min)
		{
			pb(vars);
			if (vars->s_b[0] >= vars->max / 5 * 3 + vars->min)
				rb(vars);
		}
		else
			ra(vars);
		i++;
	}
	while (vars->ctr_a)
		pb(vars);
}

static void	push_in_b_first_part(t_vars *vars)
{
	int	i;
	int	counter_a;

	i = 0;
	counter_a = vars->ctr_a;
	while (i < counter_a)
	{
		if (vars->s_a[0] <= vars->max / 5 * 2 + vars->min)
		{
			pb(vars);
			if (vars->s_b[0] >= vars->max / 5 + vars->min)
				rb(vars);
		}
		else
			ra(vars);
		i++;
	}
	push_in_b_second_part(vars, i, counter_a);
}

static void	rotate_to_index_b(t_vars *vars)
{
	int	i;

	if (vars->index_max < vars->ctr_b / 2)
	{
		i = 0;
		while (i < vars->index_max)
		{
			rb(vars);
			i++;
		}
	}
	else
	{
		i = vars->index_max;
		while (i < vars->ctr_b)
		{
			rrb(vars);
			i++;
		}
	}
}

void	sort(t_vars *vars)
{
	get_median(vars);
	push_in_b_first_part(vars);
	while (vars->ctr_b)
	{
		get_max_min_b(vars);
		rotate_to_index_b(vars);
		pa(vars);
	}
}
