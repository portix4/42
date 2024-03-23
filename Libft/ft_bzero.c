/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pportill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:31:49 by pportill          #+#    #+#             */
/*   Updated: 2024/03/13 12:01:55 by pportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "strings.h"
#include "stdio.h"

void	ft_bzero(void *s, size_t n)
{
	char	*p;
	size_t	cont;

	p = s;
	cont = 0;
	while (cont < n)
	{
		p[cont] = '\0';
		cont++;
	}
}
/*int main()
{
	char a[]="Hola, como estas?";
	char b[]="Hola, como estas?";
	bzero(a,3);
	ft_bzero(b,3);
	printf("C: %s\n",a);
	printf("P: %s",b);
	return (0);
}*/
