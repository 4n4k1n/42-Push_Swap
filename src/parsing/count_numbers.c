/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hntest2 <hntest2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 12:41:42 by hntest2           #+#    #+#             */
/*   Updated: 2025/05/25 13:00:25 by hntest2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_numbers(int ac, char **av)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (++i < ac)
		count += cwords(av[i], ' ');
	return (count);
}
