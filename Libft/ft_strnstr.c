/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pportill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:53:53 by pportill          #+#    #+#             */
/*   Updated: 2024/03/22 12:53:27 by pportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	cont1;
	int	cont2;
	int	cont_needle;

	cont1 = 0;
	cont_needle = 0;
	if (*haystack == '\0' || *needle == '\0')
		return (0);
	while (needle[cont_needle] != '\0')
		cont_needle++;
	while (haystack[cont1] != '\0' && len > 0)
	{
		cont2 = 0;
		while ((haystack[cont1] == needle[cont2]) && haystack[cont1] != '\0')
		{
			cont1++;
			cont2++;
			len--;
		}
		if (cont2 == cont_needle)
			return ((char *) haystack + cont1 - cont2);
		cont1++;
		len--;
	}
	return (0);
}
/*int main()
{
    const char s1[]="Hola como estas";
    const char s2[]="as";
    char *s3=ft_strnstr(s1, s2, 16);
    if (s3 == NULL)
        printf("No está");
    else
        printf("Puntero aqui -> %s", s3);
}*/
