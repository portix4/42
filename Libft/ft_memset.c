/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pportill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 19:31:31 by pportill          #+#    #+#             */
/*   Updated: 2024/03/13 11:31:36 by pportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h> 
#include <string.h> 

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			cont;
	unsigned char	*p;

	p = (unsigned char *) b;
	cont = 0;
	while (cont < len)
	{
		p[cont] = (unsigned char)c;
		cont++;
	}
	return (b);
}
/*
int main() 
{ 
    char str[50] = "GeeksForGeeks is for programming geeks."; 
    char str2[50] = "GeeksForGeeks is for programming geeks.";
	printf("\nBefor memset(): %s\n", str); 
  
    // Fill 8 characters starting from str[13] with '.' 
    memset(str + 13, '.', 5); 
	ft_memset(str2 + 13, '.', 5);
  
    printf("After memset(): %s\n", str); 
	printf("After ftmemset: %s", str2);
    return 0; 
}*/
