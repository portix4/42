/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pportill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 20:49:40 by pportill          #+#    #+#             */
/*   Updated: 2024/03/19 15:44:30 by pportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = s1;
	p2 = s2;
	while (n > 0 && *p1 != '\0' && *p2 != '\0')
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
		n--;
	}
	return (*p1 - *p2);
}
/*
int main() {
    char *str1 = "Hola";
    char *str2 = "Hola";
    int ret = ft_memcmp(str1,str2,6);
    if(ret > 0) {
      printf("str2 is less than str1: %d", ret);
   } else if(ret < 0) {
      printf("str1 is less than str2: %d", ret);
   } else {
      printf("str1 is equal to str2: %d", ret);
   }
    return 0;
}*/
