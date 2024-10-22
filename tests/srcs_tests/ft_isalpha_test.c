/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:40:38 by meferraz          #+#    #+#             */
/*   Updated: 2024/10/22 10:41:14 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../test.h"

void	ft_isalpha_test()
{
	char a, b;
	int c, d;
	int aa, bb;
	
	// Clear input buffer
	printf("*****************\n");
	printf("ft_isalpha_test\n");
	printf("*****************\n\n");
	
	printf("Enter an alphabetic character:\n");
	scanf(" %c", &a);
	printf("Enter a non-alphabetic character:\n");
	scanf(" %c", &b);
	
	aa = a;
	bb = b;
	c = isalpha(aa);
	d = ft_isalpha(aa);
	printf("*****************\n");
	printf("Return of lib func >> %d \n", c);
	printf("Return of ft func >> %d \n", d);
	printf("*****************\n");

	if (c && d) // Simplified check
		printf("%c is indeed an alpha!\n", aa);
	else
        	printf("%c is not an alpha!\n", aa);

	c = isalpha(bb);
	d = ft_isalpha(bb);
	printf("*****************\n");
	printf("Return of lib func >> %d \n", c);
	printf("Return of ft func >> %d \n", d);
	printf("*****************\n");

	if (c && d) // Simplified check
		printf("%c is indeed an alpha!\n", bb);
	else
		printf("%c is not an alpha!\n", bb);

	printf("*****************\n\n");
}
