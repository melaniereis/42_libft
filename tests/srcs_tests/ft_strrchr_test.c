/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:58:25 by meferraz          #+#    #+#             */
/*   Updated: 2024/10/23 10:58:40 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void ft_strrchr_test()
{
	printf("*****************\n");
	printf("ft_strrchr_test\n");
	printf("*****************\n\n");
	
	printf("*****************\n");
	printf("TEST 1\n");
	printf("*****************\n\n");

	char *s = "Hello world!";
	char c = 'o';
	char *res = strrchr(s, c);
	char *res2 = ft_strrchr(s, c);

	printf("String to test: %s\n", s);
	printf("Char to find: %c\n", c);
	printf("Result strrchr >> %s \n", res);
	printf("Result ft_strrchr >> %s \n\n", res2);

	printf("*****************\n");
	printf("TEST 2\n");
	printf("*****************\n\n");

	char *ss = "Hello world!";
	char cc = '\0';
	char *rres = strrchr(ss, cc);
	char *rres2 = ft_strrchr(ss, cc);

	printf("String to test: %s\n", ss);
	printf("Char to find: %c\n", cc);
	printf("Result strrchr >> %s \n", rres);
	printf("Result ft_strrchr >> %s \n\n", rres2);
	
	printf("*****************\n");
	printf("TEST 3\n");
	printf("*****************\n\n");

	char *sss = "Hello world!";
	char ccc = 'i';
	char *rrres = strrchr(sss, ccc);
	char *rrres2 = ft_strrchr(sss, ccc);

	printf("String to test: %s\n", sss);
	printf("Char to find: %c\n", ccc);
	printf("Result strrchr >> %s \n", rrres);
	printf("Result ft_strrchr >> %s \n\n", rrres2);
	

	printf("*****************\n\n");
}
