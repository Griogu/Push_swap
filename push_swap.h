/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpendilh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:09:35 by mpendilh          #+#    #+#             */
/*   Updated: 2024/11/28 20:51:26 by mpendilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "libft/libft.h"

typedef struct s_variables
{
	int				*s_a;
	int				*s_b;

	char			**tab;

	int				ctr_a;
	int				ctr_b;

	int				*new_sa;
	int				*new_sb;

	int				index_max;
	int				index_min;
	int				max;
	int				min;
	long long int	median;
}	t_vars;

void	error_free(t_vars *vars);
void	free_tab(char **tab);
void	free_stack(t_vars *vars);
void	error_management(void);
int		*parsing(char **av, t_vars *vars, int ac);
int		is_sort(t_vars *vars);
int		duplicate(t_vars *vars);
void	sort_three(t_vars *vars);
void	sort_five(t_vars *vars);
void	sa(t_vars *vars);
void	sb(t_vars *vars);
void	pb(t_vars *vars);
void	pa(t_vars *vars);
void	ra(t_vars *vars);
void	rb(t_vars *vars);
void	rra(t_vars *vars);
void	rrb(t_vars *vars);
void	get_median(t_vars *vars);
void	get_max_min_a(t_vars *vars);
void	get_max_min_b(t_vars *vars);
void	sort(t_vars *vars);

#endif
