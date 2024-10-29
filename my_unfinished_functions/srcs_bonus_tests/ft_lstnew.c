/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:27:10 by meferraz          #+#    #+#             */
/*   Updated: 2024/10/28 15:27:43 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;	

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
/*
int main(void) {
    // Test content
    char *test_content = "Hello, world!";
    
    // Create a new list node
    t_list *new_node = ft_lstnew(test_content);
    
    // Check if the node was created successfully
    if (new_node) {
        // Print the content of the new node
        printf("Node content: %s\n", (char *)new_node->content);
        
        // Free the allocated node
        free(new_node);
    } else {
        printf("Failed to create a new node.\n");
    }
    
    return 0;
}*/
