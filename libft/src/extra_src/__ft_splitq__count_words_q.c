/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __ft_splitq__count_words_q.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 09:50:07 by apregitz          #+#    #+#             */
/*   Updated: 2025/05/14 10:11:28 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/extra.h"

static void	count_words_loop_checks(char const *s, char c, t_cw_data *data)
{
	if (s[data->i] == '\\' && !data->escaped)
	{
		data->escaped = 1;
		data->i++;
		return ;
	}
	if (is_quote(s[data->i]) && !data->escaped)
	{
		if (data->quote_type == 0)
			data->quote_type = s[data->i];
		else if (data->quote_type == s[data->i])
			data->quote_type = 0;
	}
	if (!data->quote_type)
	{
		if (!data->active && s[data->i] != c)
		{
			data->active = 1;
			data->count++;
		}
		else if (data->active && s[data->i] == c)
			data->active = 0;
	}
}

int	count_words_q(char const *s, char c)
{
	t_cw_data	data;

	data.active = 0;
	data.count = 0;
	data.quote_type = 0;
	data.i = 0;
	data.escaped = 0;
	while (s[data.i])
	{
		count_words_loop_checks(s, c, &data);
		data.escaped = 0;
		data.i++;
	}
	return (data.count);
}
