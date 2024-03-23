/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pportill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 13:05:40 by pportill          #+#    #+#             */
/*   Updated: 2024/03/23 13:05:43 by pportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>
#include <stddef.h>

size_t	ft_strlen(const char *s);

void    *beggining(char *ptr, char const *s1, char const *set)
{
    size_t  cont;
    size_t  a;

    cont = 0;
    a = 0;
    if (s1[cont] == set)
    {
        while(s1[cont] == set && s1[cont] != '\0')
            cont++;
        while(s1[cont] != '\0')
        {
            ptr[a] = s1[cont];
            cont++;
            a++;
        }
        ptr[a] = '\0';
    }
    else
    {
        while(s1[cont] != '\0')
        {
            ptr[cont] = s1[cont];
            cont++;
        }
        ptr[cont] = '\0';
    }
    return (ptr);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *ptr;


    if (!s1)
        return (NULL);
    ptr = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
    if (ptr == NULL)
        return (NULL);
    beggining(ptr, s1, set);
    return (ptr);
}

int main()
{
    char *s1="aaaHolaComoEstasaaaa";
    char *set="a";
    char *check = ft_strtrim(s1,set);
    printf("--> %s",check);
    free(check);
}
