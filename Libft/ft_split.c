/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pportill <pportill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 16:30:15 by pportill          #+#    #+#             */
/*   Updated: 2024/04/10 18:59:01 by pportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char	**fill_array(char const *s, char c, char **tab)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		k = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > k)
		{
			tab[j] = ft_substr(s, k, i - k);
			if (!tab[j])
				return (NULL);
			j++;
		}
	}
	tab[j] = "\0";
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	if (!s)
		return (NULL);
	tab = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!tab)
		return (NULL);
	tab = fill_array(s, c, tab);
	return (tab);
}
/*int main() {
    char *input_string = "Hola,que,tal,estas";
    char delimiter = ',';
    char **result = ft_split(input_string, delimiter);
    if (result) {
        int i = 0;
        while (result[i]) {
            printf("Subcadena %d: %s\n", i, result[i]);
            i++;
        }
        for (int j = 0; result[j] != NULL; j++) {
            free(result[j]);
        }
        free(result);
    } else {
        printf("Error al dividir la cadena.\n");
    }
    return 0;
}*/
