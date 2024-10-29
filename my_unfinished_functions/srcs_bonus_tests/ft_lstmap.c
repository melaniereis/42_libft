/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:20:20 by meferraz          #+#    #+#             */
/*   Updated: 2024/10/29 13:14:10 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*temp;

	if (!lst || !f || !del)
		return (NULL);
	head = NULL;
	while (lst)
	{
		temp = ft_lstnew((*f)(lst -> content));
		if (!temp)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, temp);
		lst = lst -> next;
	}
	return (head);
}
/*
// Function to delete the content of a list node
void delete_content(void *content) {
    free(content);
}
// Transformation function that simulates a memory allocation failure
int g_call_count = 0; // Global variable to track the number of calls
void *double_value_fail(void *content) {
    g_call_count++;
    if (g_call_count > 2) {
        return NULL; // Simulate failure after 2 calls
    }
    int *new_value = malloc(sizeof(int));
    if (new_value) {
        *new_value = *(int *)content * 2;
    }
    return new_value;
}
// Function to print the contents of a list
void print_list(t_list *list) {
    while (list) {
        printf("%d -> ", *(int *)list->content);
        list = list->next;
    }
    printf("NULL\n");
}

// Main function to test ft_lstmap
int main(void) {
    int *value1 = malloc(sizeof(int));
    int *value2 = malloc(sizeof(int));
    int *value3 = malloc(sizeof(int));
    if (!value1 || !value2 || !value3) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }
    *value1 = 10;
    *value2 = 20;
    *value3 = 30;

    t_list *head = ft_lstnew(value1);
    head->next = ft_lstnew(value2);
    head->next->next = ft_lstnew(value3);

    // Print the original list
    printf("Original list contents:\n");
    print_list(head);

    // Apply ft_lstmap to double the values and simulate allocation failure
    g_call_count = 0; // Reset the call count
    t_list *new_list = ft_lstmap(head, double_value_fail, delete_content);

    // Check if ft_lstmap succeeded
    if (!new_list) {
        printf("Memory allocation failed during ft_lstmap.\n");
    } else {
        // Print the contents of the new list
        printf("New list contents after ft_lstmap:\n");
        print_list(new_list);
    }

    // Clean up: free the original list
    ft_lstclear(&head, delete_content);
    // Clean up: free the new list
    ft_lstclear(&new_list, delete_content);

    return 0;
}*/
