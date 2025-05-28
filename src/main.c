/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 10:16:38 by apregitz          #+#    #+#             */
/*   Updated: 2025/05/28 10:02:16 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_llist(t_llist *temp)
{
	int	i;

	i = 0;
	while (temp)
	{
		i = -1;
		while (++i <= temp->num)
			write(1, "-", 1);
		write(1, "\n", 1);
		temp = temp->next;
	}
}

int	main(int ac, char **av)
{ 
	if (!parsing(ac, av))
		ft_exit(1);
	t_data	*data = get_data();
	// t_llist	*temp = data->stack_a.head;
	// print_llist(temp);
	// printf("\n\n\n");
	logic();
	// printf("\n\n\n");
	// temp = data->stack_a.head;
	// print_llist(temp);
	printf("\n\nOperations: %zu\n\n", data->operations);
	ft_free();
	return (0);
}
