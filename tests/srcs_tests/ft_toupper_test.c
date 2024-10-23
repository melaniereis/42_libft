/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:28:21 by meferraz          #+#    #+#             */
/*   Updated: 2024/10/23 13:29:45 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../test.h"

void	ft_toupper_test()
{
	int c;
	printf("*****************\n");
	printf("ft_toupper_test\n");
	printf("*****************\n\n");
	
	c = '8';
	printf("Char to test: %c\n", c);
	
	printf("*****************\n");
	printf("Return of lib func >> %c \n", toupper(c));
	printf("Return of ft func >> %c \n", ft_toupper(c));
	printf("*****************\n");
	
	c = 'a';
	printf("Char to test: %c\n", c);
	
	printf("*****************\n");
	printf("Return of lib func >> %c \n", toupper(c));
	printf("Return of ft func >> %c \n", ft_toupper(c));
	printf("*****************\n");
	
	c = 'z';
	printf("Char to test: %c\n", c);
	
	printf("*****************\n");
	printf("Return of lib func >> %c \n", toupper(c));
	printf("Return of ft func >> %c \n", ft_toupper(c));
	printf("*****************\n");
	
	c = 'A';
	printf("Char to test: %c\n", c);
	
	printf("*****************\n");
	printf("Return of lib func >> %c \n", toupper(c));
	printf("Return of ft func >> %c \n", ft_toupper(c));
	printf("*****************\n");
}
