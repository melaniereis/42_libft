/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:12:07 by meferraz          #+#    #+#             */
/*   Updated: 2024/10/22 17:13:27 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../test.h"

void ft_strncmp_test()
{
	printf("*****************\n");
	printf("ft_strncmp_test\n");
	printf("*****************\n\n");
	
	printf("*****************\n");
	printf("TEST 1\n");
	printf("*****************\n\n");

	char *s = "Hello world!";
	char *c = "Hello world!";
	int size = ft_strlen(s);
	int res = strncmp(s, c, size);
	int res2 = ft_strncmp(s, c, size);

	printf("String1: %s\n", s);
	printf("to compare to string2 '%s' \nuntil size of string1.\n", c);
	printf("Result strncmp >> %d \n", res);
	printf("Result ft_strncmp >> %d \n\n", res2);

	printf("*****************\n");
	printf("TEST 2\n");
	printf("*****************\n\n");

	char *ss = "Hello world!";
	char *cc = NULL;
	int ssize = ft_strlen(ss);
	//int rres = strncmp(ss, cc, ssize);
	int rres2 = ft_strncmp(ss, cc, ssize);

	printf("String1: %s\n", ss);
	printf("to compare to string2 '%s' \nuntil size of string1.\n", cc);
	//printf("Result strncmp >> %d \n", rres);
	printf("Result ft_strncmp >> %d \n\n", rres2);
	
	printf("*****************\n");
	printf("TEST 3\n");
	printf("*****************\n\n");

	char *sss = "Hello world!";
	char *ccc = "Hell";
	int sssize = ft_strlen(sss);
	int rrres = strncmp(sss, ccc, sssize);
	int rrres2 = ft_strncmp(sss, ccc, sssize);

	printf("String1: %s\n", sss);
	printf("to compare to string2 '%s' \nuntil size of string1.\n", ccc);
	printf("Result strncmp >> %d \n", rrres);
	printf("Result ft_strncmp >> %d \n\n", rrres2);

	printf("*****************\n\n");
}
