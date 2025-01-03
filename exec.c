/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpendilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:04:29 by mpendilh          #+#    #+#             */
/*   Updated: 2024/12/01 17:03:35 by mpendilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	main(int ac, char **av)
{
	t_vars	vars;

	if (ac <= 1)
		exit(0);
	ft_memset((char *)&vars, 0, sizeof(t_vars));
	parsing(av, &vars, ac);
	if (duplicate(&vars))
	{
		free(vars.s_a);
		error_management();
	}
	if (!is_sort(&vars))
	{
		free(vars.s_a);
		exit(0);
	}
	if (vars.ctr_a == 3)
		sort_three(&vars);
	else if (vars.ctr_a == 5)
		sort_five(&vars);
	else
		sort(&vars);
	free_stack(&vars);
	return (0);
}
