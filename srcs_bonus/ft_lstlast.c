/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:17:50 by meferraz          #+#    #+#             */
/*   Updated: 2024/10/28 16:17:52 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst)
	{
		if (lst -> next == NULL)
			return (lst);
		lst = lst -> next;
	}
	return (NULL);
}

/*int main(void) {
    // Create a few nodes
    t_list *node_1 = ft_lstnew("node_1");
    t_list *node_2 = ft_lstnew("node_2");
    t_list *node_3 = ft_lstnew("node_3");

    // Link the nodes together
    node_1->next = node_2;
    node_2->next = node_3;

    // Get the last node
    t_list *last_node = ft_lstlast(node_1);
    if (last_node) {
        printf("The last node content: %s\n", (char *)last_node->content); // Should print "node_3"
    } else {
        printf("The list is empty.\n");
    }

    // Free the allocated memory
    free(node_1);
    free(node_2);
    free(node_3);

    return 0;
}*/
