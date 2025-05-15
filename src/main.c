/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 09:56:19 by apregitz          #+#    #+#             */
/*   Updated: 2025/05/14 16:39:59 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	main(int ac, char **av)
{
	t_stacks	stacks;
	t_llist		*temp = NULL;

	// printf("ptr = %p\n\n", temp);
	if (!parsing(ac, av, &stacks))
		return (1);
	temp = stacks.stack_a->head;
	// printf("ptr = %p\n\n", temp);
	// while (temp->next)
	// {
	// 	printf("num = %lli\n", temp->num);
	// 	temp = temp->next;
	// }
	free_nodes(stacks.stack_a->head);
	return (0);
}
