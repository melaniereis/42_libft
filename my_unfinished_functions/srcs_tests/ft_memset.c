/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:10:17 by meferraz          #+#    #+#             */
/*   Updated: 2024/10/17 17:04:21 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*ptr;

	if (!s)
		return (NULL);
	i = 0;
	ptr = s;
	while (i < n)
		ptr[i++] = c;
	return (s);
}
/*
int	main(void)
{
	char s[] = "Ola eu sou um test.";
	char	c;

	c = '*';
	ft_memset(s, c, 3);
	printf("%s", s);
}*/
