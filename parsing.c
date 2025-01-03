/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpendilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:13:23 by mpendilh          #+#    #+#             */
/*   Updated: 2024/11/28 20:47:16 by mpendilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	*ft_intjoin(int *tab1, int tab2, int counter)
{
	int	i;
	int	*new_tab;

	i = 0;
	new_tab = malloc(sizeof(int) * (counter + 1));
	if (!new_tab)
		return (0);
	while (i < counter)
	{
		new_tab[i] = tab1[i];
		i++;
	}
	new_tab[i] = tab2;
	free(tab1);
	return (new_tab);
}

int	check_character(char *tab)
{
	int		i;

	i = 0;
	while (tab[i])
	{
		if (ft_is_sign(tab[i]) && !ft_isdigit(tab[i + 1]))
			return (0);
		if (!ft_is_sign(tab[i]) && !ft_isdigit(tab[i])
			&& !ft_is_isspace(tab[i]))
			return (0);
		i++;
	}
	return (1);
}

long int	atoi_modif(t_vars *vars, int j)
{
	int			i;
	long int	result;
	int			counter;

	i = 0;
	result = 0;
	counter = 0;
	while (vars->tab[j][i] == ' '
		|| (vars->tab[j][i] >= 9 && vars->tab[j][i] <= 13))
		i++;
	if (vars->tab[j][i] == '-' || vars->tab[j][i] == '+')
	{
		if (vars->tab[j][i] == '-')
			counter = 1;
		i++;
	}
	while (vars->tab[j][i] >= '0' && vars->tab[j][i] <= '9')
	{
		result = result * 10 + (vars->tab[j][i++] - 48);
		if (result > 2147483648 || (result > INT_MAX && !counter))
			return (1);
	}
	if (vars->tab[j][i])
		return (1);
	return (0);
}

int	*fill_tab(t_vars *vars)
{
	int	i;

	i = 0;
	while (vars->tab[i])
	{
		if (atoi_modif(vars, i))
			error_free(vars);
		vars->s_a = ft_intjoin(vars->s_a, ft_atoi(vars->tab[i]), vars->ctr_a);
		vars->ctr_a++;
		i++;
	}
	return (vars->s_a);
}

int	*parsing(char **av, t_vars *vars, int ac)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (!check_character(av[i]))
		{
			free(vars->s_a);
			error_management();
		}
		vars->tab = ft_split(av[i], ' ');
		if (!vars->tab[0])
			error_free(vars);
		fill_tab(vars);
		free_tab(vars->tab);
		i++;
	}
	return (vars->s_a);
}
