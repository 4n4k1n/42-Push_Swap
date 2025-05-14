/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __ft_splitq__alloc_word_q.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 09:42:01 by apregitz          #+#    #+#             */
/*   Updated: 2025/05/14 10:11:19 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/extra.h"

static void	calc_word_len(const char **s, char c, t_aw_data *data)
{
	while ((*s)[data->i])
	{
		if ((*s)[data->i] == '\\' && !data->escaped)
		{
			data->escaped = 1;
			data->i++;
			continue ;
		}
		if (is_quote((*s)[data->i]) && !data->escaped)
		{
			if (data->quote_type == 0)
				data->quote_type = (*s)[data->i];
			else if (data->quote_type == (*s)[data->i])
				data->quote_type = 0;
		}
		if ((*s)[data->i] == c && !data->quote_type)
			break ;
		data->len++;
		data->escaped = 0;
		data->i++;
	}
}

static void	cpy_word(const char **s, char c, t_aw_data *data)
{
	while ((*s)[data->i])
	{
		if ((*s)[data->i] == '\\' && !data->escaped)
		{
			data->escaped = 1;
			data->i++;
			continue ;
		}
		if (is_quote((*s)[data->i]) && !data->escaped)
		{
			if (data->quote_type == 0)
				data->quote_type = (*s)[data->i];
			else if (data->quote_type == (*s)[data->i])
				data->quote_type = 0;
		}
		if ((*s)[data->i] == c && !data->quote_type)
			break ;
		data->arr[data->j++] = (*s)[data->i];
		data->escaped = 0;
		data->i++;
	}
}

static void	init_aw_data(t_aw_data *data)
{
	data->i = 0;
	data->len = 0;
	data->quote_type = 0;
	data->escaped = 0;
}

char	*alloc_word_q(const char **s, char c)
{
	t_aw_data	data;

	init_aw_data(&data);
	calc_word_len(s, c, &data);
	data.arr = (char *)malloc(sizeof(char) * (data.len + 1));
	if (!data.arr)
		return (NULL);
	init_aw_data(&data);
	cpy_word(s, c, &data);
	data.arr[data.j] = '\0';
	*s += data.i;
	return (data.arr);
}
