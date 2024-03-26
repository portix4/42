/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pportill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 16:30:15 by pportill          #+#    #+#             */
/*   Updated: 2024/03/26 16:30:17 by pportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>

size_t	ft_strlen(const char *s);

char    **ft_split(char const *s, char c)
{
    char    **ptr;
    int     row;
    int     a;
    int     b;

    row = 0;
    while (s[a] != '\0')
    {
        if (s[a] == c)
            row++;
        a++;
    }    
    **ptr = (char **)malloc(row * sizeof(char *));
    if (ptr == NULL || c == NULL)
        return (NULL);
    a = 0;
    b = 0;
    row = 0;
    while (s[b] != '\0')
    {
        if (s[b] == c)
        {
            while (s[b + 1] != c)
            {
                a++;
                b++; 
            }
            ptr[row] = (char *)malloc(a * sizeof(char));
            a = 0;      
        }            
        a++;
    }
    printf("--> %d", row);    
    return (0);
}

int main()
{
    ft_split("hola, como , estas",',');
    return (0);
}
