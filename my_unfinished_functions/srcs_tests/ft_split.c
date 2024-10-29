/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:11:55 by meferraz          #+#    #+#             */
/*   Updated: 2024/10/25 16:38:47 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	if (s[i] != c && s[i] != '\0')
		words++;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			words++;
		i++;
	}
	return (words);
}

static void	write_word(char *dest, char const *src, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[len] = '\0';
}

static int	alloc_word(char **strings, char const *str, char c, int w)
{
	int	j;

	j = 0;
	while (str[j] != c && str[j] != '\0')
		j++;
	strings[w] = malloc(sizeof(char) * (j + 1));
	if (!strings[w])
		return (0);
	write_word(strings[w], str, j);
	return (1);
}

static void	write_s(char **strings, char const *str, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			i++;
		else
		{
			if (!alloc_word(strings, str + i, c, word))
			{
				while (word > 0)
					free(strings[--word]);
				free(strings);
				return ;
			}
			word++;
			while (str[i] != c && str[i] != '\0')
				i++;
		}
	}
	strings[word] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	int		size;

	if (!s)
		return (NULL);
	size = count_words(s, c);
	strings = malloc(sizeof(char *) * (size + 1));
	if (!strings)
		return (NULL);
	write_s(strings, s, c);
	return (strings);
}

/*size_t ft_strlen2(char **str)
{
    size_t i = 0;

    if (*str == NULL)
        return 0;
    while (str[i] != NULL)
        i++;
    return i;
}

int main(void)
{
    char s[] = "To be, or not to be. This is the question.";
    //char s[] = "Hello!";
	char **stab = ft_split(s, ' ');
    for (size_t i = 0; i < ft_strlen2(stab); i++)
    {
        printf("%s\n", stab[i]);
        free(stab[i]);
    }
    free(stab);
    return 0;
}*/
