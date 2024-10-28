/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:55:37 by meferraz          #+#    #+#             */
/*   Updated: 2024/10/28 15:55:41 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		size++;
		lst = lst -> next;
	}
	return (size);
}

int main(void) 
{
	// Create a few nodes
    t_list *node_1 = ft_lstnew("node_1");
    t_list *node_2 = ft_lstnew("node_2");
    t_list *node_3 = ft_lstnew("node_3");

    // Link the nodes together
    node_1->next = node_2;
    node_2->next = node_3;

    // Calculate the size of the linked list
    int size = ft_lstsize(node_1);
    printf("Size of the linked list: %d\n", size); // Should print 3

    // Free the allocated memory
    free(node_1);
    free(node_2);
    free(node_3);

    return 0;
}
