/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 09:59:12 by apregitz          #+#    #+#             */
/*   Updated: 2025/05/14 16:15:17 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static int	check_set(char *str)
{
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}

static int	check_input_numbers(int ac, char **av)
{
	int	i;

	i = 0;
	while (i < ac - 1)
	{
		if (!check_set(av[i + 1]))
			return (0);
		i++;
	}
	return (1);
}

int	parsing(int ac, char **av, t_stacks	*stacks)
{
	if (!check_input_numbers(ac, av))
		return (0);
	stacks->stack_a->head = create_llist(ac - 1);
	if (!stacks->stack_a || !fill_ll(stacks->stack_a->head, av))
		return (0);
	return (1);
}
