/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gargage_collector.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hntest2 <hntest2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 13:07:56 by hntest2           #+#    #+#             */
/*   Updated: 2025/05/25 14:20:14 by hntest2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GARBAGE_COLLECTOR_H
# define GARBAGE_COLLECTOR_H

# include <stdlib.h>

typedef struct s_gcll
{
	void			*ptr;
	struct s_gcll	*next;
}					t_gcll;

typedef struct s_gcll_data
{
	t_gcll			*head;
	t_gcll			*tail;
}					t_gcll_data;

void				 ft_free(void);
void    			*ft_malloc(size_t size);
void				*ft_add_to_gc(void *ptr);

#endif