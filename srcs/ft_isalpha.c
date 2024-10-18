/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:53:36 by meferraz          #+#    #+#             */
/*   Updated: 2024/10/17 15:59:54 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/libft.h"
/*
int	ft_isalpha(int c);

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Enter only one character. No more, not less.");
		return (1);
	}
	else
	{
		if (argv[1][1] != '\0')
		{
			printf("Enter only one character. No more, not less.");
			return (1);
		}
		else
		{  
			if (ft_isalpha(argv[1][0]))
				printf("Yes this is an alpha!\
					Original function returns %c",\
					isalpha(argv[1][0]));\
			else
				printf("No this is not an alpha.");
		}
	}
	return (0);
}*/

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*
int	main(void)
{
	int ret1;
	int ret2;

	ret1 = isalpha(32);
	printf("lib >> %d \n", ret1);
	ret2 = ft_isalpha(32);
	printf("ft >> %d \n", ret2);

	printf("================\n");
	
	ret1 = isalpha(65);
	printf("lib >> %d \n", ret1);
	ret2 = ft_isalpha(65);
	printf("ft >> %d \n", ret2);

	printf("================\n");
	
	ret1 = isalpha(97);
	printf("lib >> %d \n", ret1);
	ret2 = ft_isalpha(97);
	printf("ft >> %d \n", ret2);

	printf("================\n");

	return (0);
}*/
