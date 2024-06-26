/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pportill <pportill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 12:58:38 by pportill          #+#    #+#             */
/*   Updated: 2024/04/13 12:13:04 by pportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*node;
	int		cont;

	node = lst;
	cont = 0;
	while (node)
	{
		cont++;
		node = node->next;
	}
	return (cont);
}
