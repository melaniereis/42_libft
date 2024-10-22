/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:42:10 by meferraz          #+#    #+#             */
/*   Updated: 2024/10/22 10:42:29 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../test.h"

void	ft_isdigit_test()
{
	char a, b;
	int c, d;
	int aa, bb;
	
	// Clear input buffer
	printf("*****************\n");
	printf("ft_isdigit_test\n");
	printf("*****************\n\n");
	
	printf("Enter a digit character:\n");
	scanf(" %c", &a);
	printf("Enter a non-digit character:\n");
	scanf(" %c", &b);
	
	aa = a;
	bb = b;
	c = isdigit(aa);
	d = ft_isdigit(aa);
	printf("*****************\n");
	printf("Return of lib func >> %d \n", c);
	printf("Return of ft func >> %d \n", d);
	printf("*****************\n");

	if (c && d) // Simplified check
		printf("%c is indeed a digit!\n", aa);
	else
        	printf("%c is not a digit!\n", aa);

	c = isdigit(bb);
	d = ft_isdigit(bb);
	printf("*****************\n");
	printf("Return of lib func >> %d \n", c);
	printf("Return of ft func >> %d \n", d);
	printf("*****************\n");

	if (c && d) // Simplified check
		printf("%c is indeed a digit!\n", bb);
	else
		printf("%c is not a digit!\n", bb);

	printf("*****************\n\n");
}
