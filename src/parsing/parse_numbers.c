/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 11:54:48 by apregitz          #+#    #+#             */
/*   Updated: 2025/05/14 12:21:13 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int atoll(char *str, t_llist *node)
{
	unsigned long long	number;
	unsigned long long	check;
	int					sign;

	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
		sign = 1 - 2 * (*(str++) == '-');
	number = 0;
	while (*str >= '0' && *str <= '9')
	{
		check = number;
		number = (number * 10) + ((*str - '0') * sign);
		if ((sign && number < check) || (!sign && number > check))
			return (0);
		str++;
	}
	node->num = (long long)number;
	return (1);
}

int	fill_ll(t_llist *head, char **av)
{
	int	i;

	i = 0;
	while (head)
	{
		if (!atoll(av[i + 1], head))
			return (0);
		head = head->next;
	}
	return (1);
}
