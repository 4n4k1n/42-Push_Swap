/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hntest2 <hntest2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 05:51:11 by hntest2           #+#    #+#             */
/*   Updated: 2025/05/26 08:07:41 by hntest2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int push_to_stack_b(t_data *data)
{
	size_t	count;

	count = 0;
	data->range = ft_sqrt(data->stack_a.size) * 1.6;
	while (data->stack_a.size)
	{
		if (data->stack_a.size <= count)
		{
			pb();
			rb();
			count++;
		}
		else if (data->stack_a.size < count + data->range)
		{
			pb();
			count++;
		}
		else
			ra();
	}
	return (1);
}

int	push_to_stack_a(t_data *data);

void	logic(void)
{
	t_data	*data;

	data = get_data();
	push_to_stack_a(data);
}
