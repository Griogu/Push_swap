/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpendilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:37:49 by mpendilh          #+#    #+#             */
/*   Updated: 2024/11/28 15:29:26 by mpendilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

static void	malloc_pb(t_vars *vars)
{
	vars->new_sa = malloc(sizeof(int) * vars->ctr_a);
	if (!vars->new_sa)
		return ;
	vars->new_sb = malloc(sizeof(int) * (vars->ctr_b + 1));
	if (!vars->new_sb)
	{
		free(vars->new_sa);
		return ;
	}
}

void	pb(t_vars *vars)
{
	int	i;
	int	j;

	malloc_pb(vars);
	vars->new_sb[0] = vars->s_a[0];
	i = 1;
	j = -1;
	vars->ctr_b++;
	while (i + ++j < vars->ctr_b)
		vars->new_sb[i + j] = vars->s_b[j];
	i = -1;
	j = 1;
	while (j + ++i < vars->ctr_a)
		vars->new_sa[i] = vars->s_a[j + i];
	vars->ctr_a--;
	free_stack(vars);
	vars->s_a = vars->new_sa;
	vars->s_b = vars->new_sb;
	ft_printf("pb\n");
}

static void	malloc_pa(t_vars *vars)
{
	vars->new_sa = malloc(sizeof(int) * (vars->ctr_a + 1));
	if (!vars->new_sa)
		return ;
	vars->new_sb = malloc(sizeof(int) * vars->ctr_b);
	if (!vars->new_sb)
	{
		free(vars->new_sa);
		return ;
	}
}

void	pa(t_vars *vars)
{
	int	i;
	int	j;

	malloc_pa(vars);
	vars->new_sa[0] = vars->s_b[0];
	i = 1;
	j = -1;
	vars->ctr_a++;
	while (i + ++j < vars->ctr_a)
		vars->new_sa[i + j] = vars->s_a[j];
	i = -1;
	j = 1;
	while (j + ++i < vars->ctr_b)
		vars->new_sb[i] = vars->s_b[j + i];
	vars->ctr_b--;
	free_stack(vars);
	vars->s_a = vars->new_sa;
	vars->s_b = vars->new_sb;
	ft_printf("pa\n");
}
