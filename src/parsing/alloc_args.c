/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hntest2 <hntest2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 13:52:46 by hntest2           #+#    #+#             */
/*   Updated: 2025/05/26 05:35:02 by hntest2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	split_arg(t_data *data, t_llist	**llist)
{
	int i;
	char **arr;
	
	arr = ft_split(arr, ' ');
	if (!arr)
		ft_exit(1);
	i = -1;
	while (arr[++i])
	{
		if (!ft_atoll(arr[i], *llist))
			ft_exit(1);
		llist = (*llist)->next;
	}
	ft_free_split(arr);
}

void	alloc_args(t_data *data)
{
	int		i;
	t_llist	*temp;

	data->stack_a.head = ft_malloc(data->words_count * sizeof(long long));
	if (!data->stack_a.head)
		ft_exit(1);
	i = 0;
	temp = data->stack_a.head;
	while (++i < data->ac)
		split_arg(data, &temp);
}
