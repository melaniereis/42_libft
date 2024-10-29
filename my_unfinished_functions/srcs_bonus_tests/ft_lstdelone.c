/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:22:31 by meferraz          #+#    #+#             */
/*   Updated: 2024/10/29 11:36:37 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	(*del)(lst -> content);
	free(lst);
}
/*
// Function to delete the content of a list node
void delete_content(void *content) {
    // Assuming content is dynamically allocated, free it
    free(content);
}

// Main function to test ft_lstdelone with multiple nodes
int main() {
    // Create multiple nodes and link them together
    int *value1 = malloc(sizeof(int));
    *value1 = 10;
    int *value2 = malloc(sizeof(int));
    *value2 = 20;
    int *value3 = malloc(sizeof(int));
    *value3 = 30;

    t_list *head = ft_lstnew(value1);
    head->next = ft_lstnew(value2);
    head->next->next = ft_lstnew(value3);

    // Print the contents of the list before deletion
    t_list *current = head;
    printf("List contents before deletion:\n");
    while (current) {
        printf("%d\n", *(int *)current->content);
        current = current->next;
    }

    // Delete the nodes one by one
    current = head;
    t_list *temp;
    int count = 0; // Count deleted nodes
    while (current) {
        temp = current;
        current = current->next; // Move to the next node before deleting
        ft_lstdelone(temp, delete_content);
        temp = NULL; // Set pointer to NULL after deletion
        count++;
    }

	// Confirm deletion
    printf("Deleted %d nodes.\n", count);
    head = NULL; // Set head to NULL to indicate the list is empty

    return 0;
}*/
