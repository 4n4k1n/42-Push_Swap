/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitq.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 18:26:58 by apregitz          #+#    #+#             */
/*   Updated: 2025/05/14 10:11:01 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/extra.h"

void	ft_free_splitq(char **arr, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

int	is_quote(char c)
{
	return (c == '\"' || c == '\'');
}

char	**ft_splitq(char const *s, char c)
{
	char	**arr;
	int		words;
	int		i;

	if (!s)
		return (NULL);
	words = count_words_q(s, c);
	arr = (char **)malloc(sizeof(char *) * (words + 1));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < words)
	{
		s = get_word_index_q(s, c);
		arr[i] = alloc_word_q(&s, c);
		if (!arr[i])
			return (ft_free_splitq(arr, i), NULL);
		i++;
	}
	arr[words] = NULL;
	return (arr);
}

// int	main(int ac, char **av)
// {
// 	if (ac != 2)
// 		return (1);
// 	char **arr = ft_splitq(av[1], ' ');
// 	int i = -1;
// 	for (int i = 0; arr[i]; i++)
// 		printf("%s ", arr[i]);
// 	while (arr[++i])
// 		free(arr[i]);
// 	free(arr[i]);
// 	free(arr);
// 	return (0);
// }
