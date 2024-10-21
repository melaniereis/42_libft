/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 11:23:28 by meferraz          #+#    #+#             */
/*   Updated: 2024/10/21 16:23:21 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/libft.h"

void	ft_isalpha_test();
void	ft_isdigit_test();
void	ft_isalnum_test();

int	main(void)
{
	ft_isalpha_test();
	ft_isdigit_test();
	ft_isalnum_test();
	return (0);
}

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
	printf("**
