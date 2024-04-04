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

int main ()
{
	t_list	*root;
	int entero1, entero2, entero3;
	//t_list *root = malloc(sizeof(t_list));
    //t_list *node1 = malloc(sizeof(t_list));
    //t_list *node2 = malloc(sizeof(t_list));
    //t_list *node3 = malloc(sizeof(t_list));

	root = malloc(sizeof(t_list));
	root->next = malloc(sizeof(t_list));
	root->next->next = malloc(sizeof(t_list));
	root->next->next->next = malloc(sizeof(t_list));

	entero1 = 42;
	root->next->content = (void *)&entero1;
	entero2 = 1337;
	root->next->next->content = (void *)&entero2;
	entero3 = 21;
	root->next->next->next->content = (void *)&entero3;
	root->next->next->next->next = NULL;

	//root->next = node1;
    //node1->content = (void *)&entero1;
    //node1->next = node2;
    //node2->content = (void *)&entero2;
    //node2->next = node3;
    //node3->content = (void *)&entero3;
    //node3->next = NULL;

	// for array I need 'i' iterator
	// for linked list I need '*current' pointer
	t_list	*current;
	current = root->next;
	while(current)
	{
		int *valor_entero = (int *)current->content;
		printf("%d\n", *valor_entero);
		current = current->next; // i++ for the array
	}
	free(root->next->next);
    free(root->next);
    free(root);

	//free(node3);
    //free(node2);
    //free(node1);
    //free(root);
	return (0);
}
