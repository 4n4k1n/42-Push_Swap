/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cwords.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hntest2 <hntest2@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 12:42:56 by hntest2           #+#    #+#             */
/*   Updated: 2025/05/25 12:57:57 by hntest2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	cwords(char const *s, char c)
{
	int	count;
	int	active;

	active = 0;
	count = 0;
	while (*s)
	{
		if (!active && *s != c)
		{
			active = 1;
			count++;
		}
		else if (active && *s == c)
			active = 0;
		s++;
	}
	return (count);
}
