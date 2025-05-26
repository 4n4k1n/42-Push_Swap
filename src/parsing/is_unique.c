/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_unique.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hntest2 <hntest2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 07:57:40 by hntest2           #+#    #+#             */
/*   Updated: 2025/05/26 08:05:42 by hntest2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_unique(t_data *data)
{
	t_llist	*temp1;
	t_llist	*temp2;

	temp1 = data->stack_a.head;
	while (temp1)
	{
		temp2 = data->stack_a.head;
		while (temp2)
		{
			if (temp1 != temp2 && temp1->num == temp2->num)
				ft_exit(1);
			temp2 = temp2->next;
		}
		temp1 = temp1->next;
	}
	return (1);
}
