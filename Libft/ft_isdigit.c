/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pportill <pportill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:56:29 by pportill          #+#    #+#             */
/*   Updated: 2024/04/10 19:57:23 by pportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c == '\0')
		return (0);
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
/*int main()
{
	printf("->%d", ft_isdigit(33));
	return (0);
}*/
