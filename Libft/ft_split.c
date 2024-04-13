/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pportill <pportill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 16:30:15 by pportill          #+#    #+#             */
/*   Updated: 2024/04/13 14:15:12 by pportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char *str, char c)
{
	int	cont;
	int	i;

	cont = 0;
	i = 0;
	if (*str == NULL || *str == " ")
		return (0);
	while (str[i])
	{
		if (str[i] == c)
			cont++;
	}
}

int	ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

char	*fill_word(char *str, int size)
{
	char *c;
	int	i;

	i = 0;
	c = malloc((size + 1) * sizeof(char *));
	c = ft_strdup(str);
	return (c);
}

char **ft_split(char const *s, char c)
{
	int cont_words;
	int **words_array;
	size_t	i;
	size_t	j;

	i = 0;
	cont_words = count_words(s, c);
	words_array = malloc(cont_words * sizeof(int *));
	while (s[i])
	{
		j = 1;
		if (s[i] == c)
		{
			while (s[i + j])
			{
				if (s[i + j] == c || s[i + j + 1] == '\0')
				{

				}
					return
				j++;
			}

		}
	}
}
