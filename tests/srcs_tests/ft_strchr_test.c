/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:33:58 by meferraz          #+#    #+#             */
/*   Updated: 2024/10/22 15:35:39 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../test.h"

void ft_strchr_test()
{
	printf("*****************\n");
	printf("ft_strchr_test\n");
	printf("*****************\n\n");
	
	printf("*****************\n");
	printf("TEST 1\n");
	printf("*****************\n\n");

	char *s = "Hello world!";
	char c = 'w';
	char *res = strchr(s, c);
	char *res2 = ft_strchr(s, c);

	printf("String to test: %s\n", s);
	printf("Char to find: %c\n", c);
	printf("Result strchr >> %s \n", res);
	printf("Result ft_strchr >> %s \n\n", res2);

	printf("*****************\n");
	printf("TEST 2\n");
	printf("*****************\n\n");

	char *ss = "Hello world!";
	char cc = '\0';
	char *rres = strchr(ss, cc);
	char *rres2 = ft_strchr(ss, cc);

	printf("String to test: %s\n", ss);
	printf("Char to find: %c\n", cc);
	printf("Result strchr >> %s \n", rres);
	printf("Result ft_strchr >> %s \n\n", rres2);
	
	printf("*****************\n");
	printf("TEST 3\n");
	printf("*****************\n\n");

	char *sss = "Hello world!";
	char ccc = 'i';
	char *rrres = strchr(sss, ccc);
	char *rrres2 = ft_strchr(sss, ccc);

	printf("String to test: %s\n", sss);
	printf("Char to find: %c\n", ccc);
	printf("Result strchr >> %s \n", rrres);
	printf("Result ft_strchr >> %s \n\n", rrres2);
	

	printf("*****************\n\n");
}
