/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpendilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:40:03 by mpendilh          #+#    #+#             */
/*   Updated: 2024/12/01 12:06:07 by mpendilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	sa(t_vars *vars)
{
	int	tmp;

	tmp = vars->s_a[0];
	vars->s_a[0] = vars->s_a[1];
	vars->s_a[1] = tmp;
	ft_printf("sa\n");
}

void	sb(t_vars *vars)
{
	int	tmp;

	tmp = vars->s_b[0];
	vars->s_b[0] = vars->s_b[1];
	vars->s_b[1] = tmp;
	ft_printf("sb\n");
}
