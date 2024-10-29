/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:36:55 by meferraz          #+#    #+#             */
/*   Updated: 2024/10/29 12:40:52 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	ptr = ft_lstlast(*lst);
	ptr -> next = new;
}
/*
// Function to print the list
void print_list(t_list *lst) {
    while (lst) {
        printf("%s -> ", (char *)lst->content);
        lst = lst->next;
    }
    printf("NULL\n");
}

int main(void) {
    t_list *head = NULL;

    // Create a few nodes
    t_list *node_1 = ft_lstnew("node_1");
    t_list *node_2 = ft_lstnew("node_2");
    t_list *node_3 = ft_lstnew("node_3");

    // Add nodes to the list
    ft_lstadd_back(&head, node_1);
    ft_lstadd_back(&head, node_2);
    ft_lstadd_back(&head, node_3);

    // Print the list
    print_list(head); // Expected output: node_1 -> node_2 -> node_3 -> NULL

    // Free the allocated memory
    t_list *tmp;
    while (head) {
        tmp = head;
        head = head->next;
        free(tmp);
    }

    return 0;
}*/
