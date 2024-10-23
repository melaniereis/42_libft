/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:47:04 by meferraz          #+#    #+#             */
/*   Updated: 2024/10/23 11:51:50 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void	ft_isprint_test()
{
	char a;
	int c, d;
	int aa, bb;
	
	// Clear input buffer
	printf("*****************\n");
	printf("ft_isprint_test\n");
	printf("*****************\n\n");
	
	printf("Enter a printable character:\n");
	scanf(" %c", &a);
	printf("For the second thest will use c = 1:\n");
	
	aa = a;
	bb = 1;
	c = isprint(aa);
	d = ft_isprint(aa);
	printf("*****************\n");
	printf("Return of lib func >> %d \n", c);
	printf("Return of ft func >> %d \n", d);
	printf("*****************\n");

	if (c && d) // Simplified check
		printf("%c is indeed printable!\n", aa);
	else
        	printf("%c is not printable!\n", aa);

	c = isprint(bb);
	d = ft_isprint(bb);
	printf("*****************\n");
	printf("Return of lib func >> %d \n", c);
	printf("Return of ft func >> %d \n", d);
	printf("*****************\n");

	if (c && d) // Simplified check
		printf("%c is indeed printable!\n", bb);
	else
		printf("%c is not printable!\n", bb);

	printf("*****************\n\n");
}
