/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:43:11 by meferraz          #+#    #+#             */
/*   Updated: 2024/10/22 10:43:28 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../test.h"

void	ft_isalnum_test()
{
	char a, b;
	int c, d;
	int aa, bb;
	
	// Clear input buffer
	printf("*****************\n");
	printf("ft_isalnum_test\n");
	printf("*****************\n\n");
	
	printf("Enter a numeric or alphabetic character:\n");
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
