/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 10:15:25 by apregitz          #+#    #+#             */
/*   Updated: 2025/05/26 10:15:27 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_llist	*split_arg(char *str, t_llist *llist)
{
	int		i;
	char	**arr;
	
	arr = ft_split(str, ' ');
	if (!arr)
		ft_exit(1);
	i = -1;
	while (arr[++i])
	{
		if (!ft_atoll(arr[i], llist))
			ft_exit(1);
		llist = llist->next;
	}
	ft_free_split(arr);
	return (llist);
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
		temp = split_arg(data->av[i], temp);
}
