/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hntest2 <hntest2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 12:34:58 by hntest2           #+#    #+#             */
/*   Updated: 2025/05/26 05:30:36 by hntest2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include "libft.h"

typedef struct s_llist
{
	struct s_llist	*next;
	struct s_llist	*prev;
	int				num;
}					t_llist;

typedef struct s_stack
{
	t_llist			*head;
	t_llist			*tail;
	size_t			size;
}					t_stack;

typedef struct s_data
{
	t_stack			stack_a;
	t_stack			stack_b;
	int				words_count;
	int				ac;
	char			**av;
}					t_data;

int					count_numbers(t_data *data);
int					valid_input(t_data *data);
void				alloc_args(t_data *data);

t_data				*get_data(void);

void				ft_exit(int	error);

int					cwords(char const *s, char c);
int					ft_atoll(char *str, t_llist *node);

#endif
