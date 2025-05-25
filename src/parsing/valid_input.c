/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hntest2 <hntest2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 12:44:42 by hntest2           #+#    #+#             */
/*   Updated: 2025/05/25 13:00:48 by hntest2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	valid_set(const char *arg)
{
	int i;

	i = 0;
	while (arg[i])
	{
		if (!((arg[i] >= '0' && arg[i] <= '9') || arg[i] == ' '))
			return (0);
		i++;
	}
	return (1);
}

int	valid_input(int ac, char **av)
{
	int i;

	i = 0;
	while (++i < ac)
	{
		if (!valid_set(av[i]))
			return (0);
		i++;
	}
	return (1);
}
