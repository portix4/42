/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pportill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 17:59:40 by pportill          #+#    #+#             */
/*   Updated: 2024/04/05 17:59:40 by pportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *));

void    ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list  *aux;

    aux = lst;
    while(aux)
    {
        ft_lstdelone(*lst,del);
        aux = aux->next;
        lst = aux;
    }
    free(*lst);
    *lst= NULL;
}