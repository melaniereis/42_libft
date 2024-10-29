/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:12:23 by meferraz          #+#    #+#             */
/*   Updated: 2024/10/29 12:17:45 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void*))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		(*f)(lst -> content);
		lst = lst -> next;
	}
}
/*// Function to print the content of a list node
void print_content(void *content) {
    printf("%d\n", *(int *)content);
}

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

    // Print the contents of the list using ft_lstiter
    printf("List contents using ft_lstiter:\n");
    ft_lstiter(head, print_content);

    // Clean up: free the list
    t_list *current = head;
    t_list *temp;
    while (current) {
        temp = current;
        current = current->next;
        free(temp->content); // Free the content
        free(temp);         // Free the node
    }

    return 0;
}*/
