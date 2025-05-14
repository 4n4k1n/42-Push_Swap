/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   __ft_splitq__get_word_index_q.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 09:46:47 by apregitz          #+#    #+#             */
/*   Updated: 2025/05/14 10:11:37 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/extra.h"

static int	get_word_index_loop_checks(char const *s, char *type, int *esc)
{
	if (*s == '\\' && !esc)
	{
		*esc = 1;
		s++;
		return (1);
	}
	if (is_quote(*s) && !*esc)
	{
		if (*type == 0)
			*type = *s;
		else if (*type == *s)
			*type = 0;
	}
	return (0);
}

const char	*get_word_index_q(const char *s, char c)
{
	char	quote_type;
	int		escaped;

	quote_type = 0;
	escaped = 0;
	while (*s)
	{
		if (get_word_index_loop_checks(s, &quote_type, &escaped))
			continue ;
		if (*s == c && !quote_type)
			s++;
		else
			return (s);
		escaped = 0;
	}
	return (s);
}
