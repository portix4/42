/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pportill <pportill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 20:36:56 by pportill          #+#    #+#             */
/*   Updated: 2024/04/03 20:50:09 by pportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
/*
int main ()
{
	t_list	*root;
	t_list	*current;

	//THE *current FOR A LIST
	//IS THE 'i' FOR AN ARRAY

	current = root;
	while (current != NULL)
	{
		//WHATEVER
		current = current->next;
	}
}
*/

int main ()
{
	t_list	*root;

	root = malloc(sizeof(t_list));
	root->next = malloc(sizeof(t_list));
	root->next->next = malloc(sizeof(t_list));

	root->n = 42;
	root->next->n = 1337;
}
