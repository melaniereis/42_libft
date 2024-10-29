/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:05:51 by meferraz          #+#    #+#             */
/*   Updated: 2024/10/18 15:33:37 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_bzero(void *s, size_t n);
/*
int	main(void)
{
	char	s1[] = "Hello I am just a test.";
	char	s2[] = "Hello I am just a test.";
	
	ft_bzero(s1, 4);
	bzero(s2, 4);
	printf("%s\n %s\n", s1, s2);
}*/

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;

	if (!s)
		return ;
	ptr = s;
	while (n)
	{
		*ptr++ = 0;
		n--;
	}
}
