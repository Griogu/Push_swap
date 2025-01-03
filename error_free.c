/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_free.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpendilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 09:36:36 by mpendilh          #+#    #+#             */
/*   Updated: 2024/11/26 12:05:35 by mpendilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	free_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	tab = NULL;
}

void	error_management(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(0);
}

void	error_free(t_vars *vars)
{
	free_tab(vars->tab);
	free(vars->s_a);
	error_management();
}

void	free_stack(t_vars *vars)
{
	free(vars->s_a);
	free(vars->s_b);
}
