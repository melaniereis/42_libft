/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 09:36:08 by meferraz          #+#    #+#             */
/*   Updated: 2024/10/24 09:55:56 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	if (!s1 || !s2 || n == 0)
		return (0);
	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while ((str1[i] || str2[i]) && (i < n))
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
int main(void)
{
	char *s = "Hello";
	char *s1 = "Hello";
	char *s2 ="hel";
	char *s3 = "Hel";

	printf("string1: %s || string2: %s\n", s, s1);
	printf("lib func: %d || ft func: %d\n", memcmp(s, s1, 5), 
	ft_memcmp(s, s1, 5));
	printf("string1: %s || string2: %s\n", s, s2);
	printf("lib func: %d || ft func: %d\n", memcmp(s, s2, 5), 
	ft_memcmp(s, s2, 5));
	printf("string1: %s || string2: %s\n", s, s3);
	printf("lib func: %d || ft func: %d\n", memcmp(s, s3, 5), 
	ft_memcmp(s, s3, 5));
}*/
