/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hntest2 <hntest2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 09:56:19 by apregitz          #+#    #+#             */
/*   Updated: 2025/05/25 12:33:32 by hntest2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	// printf("ptr = %p\n\n", temp);
	if (!parsing(ac, av))
		return (1);
	// printf("ptr = %p\n\n", temp);
	// while (temp->next)
	// {
	// 	printf("num = %lli\n", temp->num);
	// 	temp = temp->next;
	// }
	free_nodes();
	return (0);
}
