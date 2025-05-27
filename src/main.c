/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 10:16:38 by apregitz          #+#    #+#             */
/*   Updated: 2025/05/27 12:30:26 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_llist(t_llist *temp)
{
	while (temp)
	{
		printf("%d\n", temp->num);
		temp = temp->next;
	}
}

int	main(int ac, char **av)
{ 
	if (!parsing(ac, av))
		ft_exit(1);
	t_data	*data = get_data();
	t_llist	*temp = data->stack_a.head;
	print_llist(temp);
	printf("\n\n\n");
	// logic();
	temp = data->stack_a.head;
	print_llist(temp);
	return (0);
}
