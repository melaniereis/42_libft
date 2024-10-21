/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 09:50:22 by meferraz          #+#    #+#             */
/*   Updated: 2024/10/18 15:32:08 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/libft.h"

/*void	*ft_memcpy(void *dest, const void *src, size_t n);

int	main(void)
{
	char	s[] =  "Hello I am a test";
	char	buff[50];
	char	buff2[50];

	ft_memcpy(buff, s, 17);
	memcpy(buff2, s, 17);
	printf("%s\n%s\n", buff, buff2);
	return (0);
}*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned const char	*s;
	unsigned char		*d;
	size_t				i;

	if (!src || !dest)
		return (NULL);
	s = src;
	d = dest;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (dest);
}
