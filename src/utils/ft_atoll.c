/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 10:16:14 by apregitz          #+#    #+#             */
/*   Updated: 2025/05/26 10:16:15 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoll(char *str, t_llist *node)
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
		printf("%llu\n", number);
		number = (number * 10) + ((*str - '0') * sign);
		printf("%llu\n", number);
		if ((sign && number < check) || (!sign && number > check))
			return (0);
		str++;
	}
	node->num = (long long)number;
	return (1);
}
