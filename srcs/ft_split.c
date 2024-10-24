/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:11:55 by meferraz          #+#    #+#             */
/*   Updated: 2024/10/24 15:39:32 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/libft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_strlen2(char **str)
{
	int	i;

	i = 0;
	if (*str == NULL)
		return (0);
	while (str[i] != NULL)
		i++;
	return (i);
}

int	is_c(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	count_words(char *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if (is_c(s[i + 1], c) && !(is_c(s[i], c)))
			words++;
		i++;
	}
	return (words);
}

void	write_word(char *dest, char *src, char *c)
{
	int	i;

	i = 0;
	while (!is_c(src[i], c))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	write_s(char **strings, char *str, char *c)
{
	int	i;
	int	j;
	int	word;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		if (is_c(str[i], c))
			i++;
		else
		{
			j = 0;
			while (!is_c(str[i + j], c))
				j++;
			strings[word] = malloc(sizeof(char) * (j + 1));
			write_word(strings[word], str + i, c);
			i += j;
			word++;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	int		size;

	if (s == NULL)
		return (NULL);
	size = count_words(s, c);
	strings = malloc (sizeof(char *) * (size + 1));
	strings[size] = 0;
	write_s(strings, s, c);
	return (strings);
}

#include <stdio.h>

int	main(void)
{
	char s[] = "To be, or not to be. This is the question.";
	char **stab = ft_split(s, ' ');
	for (int i = 0; i < ft_strlen2(stab); i++)
	{
		for(int j = 0;  j < ft_strlen(stab[i]); j++)
			printf("%c", stab[i][j]);
		printf("%s","\n");
	}
	free(stab);
	return (0);
}
