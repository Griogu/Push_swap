/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpendilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 10:52:31 by mpendilh          #+#    #+#             */
/*   Updated: 2024/11/28 19:29:29 by mpendilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	rra(t_vars *vars)
{
	int	i;
	int	tmp;

	i = vars->ctr_a - 1;
	tmp = vars->s_a[vars->ctr_a - 1];
	while (i > 0)
	{
		vars->s_a[i] = vars->s_a[i - 1];
		i--;
	}
	vars->s_a[0] = tmp;
	ft_printf("rra\n");
}

void	rrb(t_vars *vars)
{
	int	i;
	int	tmp;

	i = vars->ctr_b - 1;
	tmp = vars->s_b[vars->ctr_b - 1];
	while (i > 0)
	{
		vars->s_b[i] = vars->s_b[i - 1];
		i--;
	}
	vars->s_b[0] = tmp;
	ft_printf("rrb\n");
}
