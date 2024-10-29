/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:09:02 by meferraz          #+#    #+#             */
/*   Updated: 2024/10/24 10:23:21 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!big && !len)
		return (0);
	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (i < len && big[i])
	{
		j = 0;
		while (i + j < len && big[i + j] != '\0' && big[i + j] == little[j])
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (0);
}
/*
void test_case(const char *haystack, const char *needle, size_t len) {
    char *result = ft_strnstr(haystack, needle, len);
    printf("Searching for '%s' in '%s' (len=%zu): %s\n", needle, haystack, 
	len, result ? result : "Not found.");
}

void test_strnstr_if_available(const char *haystack, const char *needle, 
size_t len) {
    #ifdef __APPLE__ // macOS includes strnstr
        char *standard_result = strnstr(haystack, needle, len);
        printf("Using strnstr: Searching for '%s' in '%s' (len=%zu): %s\n", n
		eedle, haystack, len, standard_result ? standard_result : "Not found.
		");
    #else
        printf("strnstr is not available on this platform.\n");
    #endif
}

int main() {
    const char *text = "Hello, world!";
    
    // Test cases
    printf("Testing ft_strnstr:\n");
    test_case(text, "world", 12);
    test_case(text, "Hello", 12);
    test_case(text, "notfound", 12);
    test_case(text, "", 12);
    test_case(text, "Hello, world!!!", 12);
    test_case(NULL, "world", 12);
    test_case(text, NULL, 12);

    // Testing strnstr if available
    printf("\nTesting strnstr if available:\n");
    test_strnstr_if_available(text, "world", 12);
    test_strnstr_if_available(text, "Hello", 12);
    test_strnstr_if_available(text, "notfound", 12);
    test_strnstr_if_available(text, "", 12);
    test_strnstr_if_available(text, "Hello, world!!!", 12);
    test_strnstr_if_available(NULL, "world", 12);
    test_strnstr_if_available(text, NULL, 12);

    return 0;
}*/
