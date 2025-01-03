/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpendilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 11:25:13 by mpendilh          #+#    #+#             */
/*   Updated: 2024/11/28 20:52:03 by mpendilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	sort_three(t_vars *vars)
{
	get_max_min_a(vars);
	if (!vars->index_max && vars->index_min)
	{
		ra(vars);
		if (vars->index_min == 2)
			sa(vars);
	}
	else if (vars->index_max == 1)
	{
		rra(vars);
		if (!vars->index_min)
			sa(vars);
	}
	else if (!is_sort(vars))
		return ;
	else
		sa(vars);
}
