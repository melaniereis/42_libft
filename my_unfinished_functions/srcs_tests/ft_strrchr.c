/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:40:20 by meferraz          #+#    #+#             */
/*   Updated: 2024/10/25 17:09:57 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	size;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	while (size > 0)
	{
		if (s[size - 1] == c)
			return ((char *)s + size - 1);
		size--;
	}
	if (c == '\0')
		return ((char *)s + size);
	return (NULL);
}
