/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   garbage_collector.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hntest2 <hntest2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 13:05:17 by hntest2           #+#    #+#             */
/*   Updated: 2025/05/26 07:08:03 by hntest2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gargage_collector.h"

static t_gcll_data	*get_gcll_data(void)
{
	static t_gcll_data data;

	return (&data);
}
void	*ft_add_to_gc(void *ptr)
{
	t_gcll_data	*data;
	t_gcll		*node;

	if (!ptr)
		return (NULL);
	data = get_gcll_data();
	node = malloc(sizeof(t_gcll));
	node->next = NULL;
	data->tail->next = node;
	data->tail = data->tail->next;
	return (ptr);
}


void ft_free(void)
{
	t_gcll_data	*data;
	t_gcll		*temp;

	data = get_gcll_data();
	temp = data->head;
	while (data->head)
	{
		temp = data->head->next;
		free(data->head->ptr);
		free(data->head);
		data->head = temp;
	}
}

void	*ft_malloc(size_t size)
{
	t_gcll_data	*data;
	t_gcll		*node;

	data = get_gcll_data();
	node = malloc(sizeof(t_gcll));
	if (!node)
		return (NULL);
	node->ptr = malloc(size);
	if (!node->ptr)
		return (NULL);
	if (!data->head)
		data->head = node;
	else
	{
		data->tail->next = node;
		data->tail = data->tail->next;
	}
	node->next = NULL;
	return (node->ptr);
}
