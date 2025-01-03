/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpendilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 19:18:27 by mpendilh          #+#    #+#             */
/*   Updated: 2024/11/28 19:24:35 by mpendilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

static void	rotate_to_index_a(t_vars *vars)
{
	int	i;

	if (vars->index_min < vars->ctr_a / 2)
	{
		i = 0;
		while (i < vars->index_min)
		{
			ra(vars);
			i++;
		}
	}
	else
	{
		i = vars->index_min;
		while (i < vars->ctr_a)
		{
			rra(vars);
			i++;
		}
	}
}

void	sort_five(t_vars *vars)
{
	get_max_min_a(vars);
	rotate_to_index_a(vars);
	pb(vars);
	get_max_min_a(vars);
	rotate_to_index_a(vars);
	pb(vars);
	if (vars->s_b[0] < vars->s_b[1])
		sb(vars);
	sort_three(vars);
	pa(vars);
	pa(vars);
}
