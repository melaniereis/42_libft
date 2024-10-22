/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:10:42 by meferraz          #+#    #+#             */
/*   Updated: 2024/10/22 13:03:46 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void	ft_isascii_test()
{
	char a, b;
	int c, d;
	int aa, bb;
	
	// Clear input buffer
	printf("*****************\n");
	printf("ft_isascii_test\n");
	printf("*****************\n\n");
	
	printf("Enter a character:\n");
	scanf(" %c", &a);
	printf("Enter a non-numeric and non-alphabetic character:\n");
	scanf(" %c", &b);
	
	aa = a;
	bb = b;
	c = isalnum(aa);
	d = ft_isalnum(aa);
	printf("*****************\n");
	printf("Return of lib func >> %d \n", c);
	printf("Return of ft func >> %d \n", d);
	printf("*****************\n");

	if (c && d) // Simplified check
		printf("%c is indeed an alphanumeric!\n", aa);
	else
        	printf("%c is not an alphanumeric!\n", aa);

	c = isalnum(bb);
	d = ft_isalnum(bb);
	printf("*****************\n");
	printf("Return of lib func >> %d \n", c);
	printf("Return of ft func >> %d \n", d);
	printf("*****************\n");

	if (c && d) // Simplified check
		printf("%c is indeed an alphanumeric!\n", bb);
	else
		printf("%c is not an alphanumeric!\n", bb);

	printf("*****************\n\n");
}
