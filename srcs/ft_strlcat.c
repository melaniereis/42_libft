/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:38:52 by meferraz          #+#    #+#             */
/*   Updated: 2024/10/22 11:43:26 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_size;
	size_t	src_size;
	size_t	len;

	if (!dest || !src)
		return (0);
	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	len = src_size + dest_size;
	src_size = 0;
	while (dest_size < size && src[src_size] != '\0')
	{
		dest[dest_size] = src[src_size];
		dest_size++;
		src_size++;
	}
	dest[dest_size] = '\0';
	return (len);
}

/*int	main(void)
{
	char	s[20] = "Hello ";
	char	*s2 = "World";
	char	ss[20] = "Hello ";
	char	*ss2 = "World";

	printf("String before ft_strlcat %s \n", s);
	ft_strlcat(s, s2, sizeof(s));
	printf("String after ft_strlcat %s \n", s);

	printf("String before strlcat %s \n", ss);
	ft_strlcat(ss, ss2, sizeof(s));
	printf("String after strlcat %s \n", ss);
}*/
