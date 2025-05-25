/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hntest2 <hntest2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 13:52:46 by hntest2           #+#    #+#             */
/*   Updated: 2025/05/25 14:35:43 by hntest2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	alloc_args(void)
{
	t_data	*data;
	int		i;
	int		j;
	int		k;

	data = get_data();
	data->numbers = ft_malloc(data->words_count * sizeof(int));
	if (!data->numbers)
		return (0);
	i = 0;
	k = -1;
	while (++i < data->ac)
	{
		data->str = ft_split(data->av[i], ' ');
		if (!data->str)
			return (0);
		j = -1;
		while (data->str[++j])
			data->numbers[++k] = ft_atoi(data->str[j]);
		ft_free_split(data->str);
	}
}
