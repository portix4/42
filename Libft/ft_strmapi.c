/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pportill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 18:24:35 by pportill          #+#    #+#             */
/*   Updated: 2024/04/01 18:24:35 by pportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s);

/*char f(unsigned int i, char c)
{
    char str;
    str = c + 1;
    return (str);
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	size_t	i;

	if (!s || !f)
		return (NULL);
	ptr = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*int main()
{
    char str1[] = "abc";
    char* str2;
    str2 = ft_strmapi(str1, *f);
    printf("%s\n", str2);
}*/