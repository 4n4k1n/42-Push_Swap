/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_llist.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hntest2 <hntest2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 10:25:46 by apregitz          #+#    #+#             */
/*   Updated: 2025/05/25 15:56:40 by hntest2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void	free_nodes(t_llist *head)
{
	t_llist	*temp;

	while (head->next)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

static t_llist	*new_node(void)
{
	t_llist	*new;

	new = (t_llist *)ft_malloc(sizeof(t_llist));
	if (!new)
		return (NULL);
	new->num = 0;
	new->prev = NULL;
	new->next = NULL;
	return (new);
}

t_llist	*create_llist(size_t size)
{
	t_llist	*new;
	t_llist	*temp;
	t_llist	*prev;
	size_t		i;

	i = 0;
	new = new_node();
	if (!new)
		return (NULL);
	temp = new;
	while (i < size)
	{
		prev = temp;
		temp->next = new_node();
		if (!temp->next)
			return (NULL);
		temp = temp->next;
		temp->prev = prev;
		i++;
	}
	return (new);
}
