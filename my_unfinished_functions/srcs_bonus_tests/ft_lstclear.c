/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:50:46 by meferraz          #+#    #+#             */
/*   Updated: 2024/10/29 12:10:49 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*head;

	if (!lst || !del)
		return ;
	head = *lst;
	while (head)
	{
		temp = head -> next;
		ft_lstdelone(head, del);
		head = temp;
	}
	*lst = NULL;
}
/*
// Function to delete the content of a list node
void delete_content(void *content) {
    free(content);
}
// Main function to test ft_lstclear with multiple nodes
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

    // Print the contents of the list before clearing
    t_list *current = head;
    printf("List contents before clearing:\n");
    while (current) {
        printf("%d\n", *(int *)current->content);
        current = current->next;
    }

    // Clear the list
    ft_lstclear(&head, delete_content);

    // Confirm that the list is cleared
    if (head == NULL) {
        printf("List cleared successfully.\n");
    } else {
        printf("Failed to clear the list.\n");
    }

    return 0;
}*/
