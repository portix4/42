/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pportill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 19:50:35 by pportill          #+#    #+#             */
/*   Updated: 2024/04/07 19:50:35 by pportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content);

void	ft_lstclear(t_list **lst, void (*del)(void *));

void	ft_lstadd_back(t_list **lst, t_list *new);

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*aux_list;
	t_list	*aux_node;

	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		aux_node = ft_lstnew(f(lst->content));
		if (aux_node == NULL)
		{
			ft_lstclear(&aux_list, del);
			return (NULL);
		}
		ft_lstadd_back(&aux_list, aux_node);
		lst = lst->next;
	}
	return (aux_list);
}