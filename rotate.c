/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpendilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 14:28:37 by mpendilh          #+#    #+#             */
/*   Updated: 2024/11/28 19:29:36 by mpendilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ra(t_vars *vars)
{
	int	i;
	int	tmp;

	i = -1;
	tmp = vars->s_a[0];
	while (++i < vars->ctr_a - 1)
		vars->s_a[i] = vars->s_a[i + 1];
	vars->s_a[vars->ctr_a - 1] = tmp;
	ft_printf("ra\n");
}

void	rb(t_vars *vars)
{
	int	i;
	int	tmp;

	i = -1;
	tmp = vars->s_b[0];
	while (++i < vars->ctr_b - 1)
		vars->s_b[i] = vars->s_b[i + 1];
	vars->s_b[vars->ctr_b - 1] = tmp;
	ft_printf("rb\n");
}
