/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 09:09:44 by meferraz          #+#    #+#             */
/*   Updated: 2024/10/25 09:14:30 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*# define RESET "\033[0m"
# define GREEN "\033[0;32m"
# define RED "\033[0;31m"
# define YELLOW "\033[0;33m"
# define MAGENTA "\033[0;35m"
# define BLUE "\033[0;34m"

char *ft_substr(char const *s, unsigned int start, size_t len);

int ft_substr_test() {
    const char *test_str = "Hello, World!";
    const char *long_str = "This is a long string used for testing the ft_substr function's handling of various edge cases and limits.";
    
    struct {
        unsigned int start;
        size_t len;
        const char *expected;
    } test_cases[] = {
        {7, 5, "World"},      // Normal case
        {0, 5, "Hello"},      // Start at beginning
        {0, 0, ""},           // Length is zero
        {13, 5, ""},          // Start out of bounds
        {5, 50, "o, World!"}, // Length exceeds available characters
        {6, 1, ","},          // Single character
        {13, 0, ""},          // Start at end of string
        {0, 20, "Hello, World!"}, // Request more than available
        {0, 100, "Hello, World!"}, // Request way more than available
        {5, 0, ""},           // Length zero after start
        {10, 100, "rld!"},    // Starting in the middle, request more
        {0, strlen(long_str), long_str}, // Full long string
        {0, 1000, long_str},  // Length exceeds the long string
        {5, 1000, " is a long string used for testing the ft_substr function's handling of various edge cases and limits."}, // Large length from middle
        {strlen(long_str), 1, ""} // Start at end of long string
    };

    int num_tests = sizeof(test_cases) / sizeof(test_cases[0]);
    printf("\n*************************************");
    printf("\n*     Running ft_substr() Tests    *\n");
    printf("*************************************\n");

	 for (int i = 0; i < num_tests; i++) {
        char *result = ft_substr(i < 8 ? test_str : long_str, test_cases[i].start, test_cases[i].len);
        if (result && strcmp(result, test_cases[i].expected) == 0) {
            printf("%s[✔] Test passed for ft_substr(%u, %zu) (Got: \"%s\")%s\n",
                   GREEN, test_cases[i].start, test_cases[i].len, result, RESET);
        } else if (!result && strlen(test_cases[i].expected) == 0) {
            printf("%s[✔] Test passed for ft_substr(%u, %zu) (Got: NULL)%s\n",
                   GREEN, test_cases[i].start, test_cases[i].len, RESET);
        } else {
            printf("%s[✖] Test failed for ft_substr(%u, %zu) (Expected: \"%s\", Got: \"%s\")%s\n",
                   RED, test_cases[i].start, test_cases[i].len, test_cases[i].expected, result ? result : "NULL", RESET);
        }
        free(result); // Free allocated memory
    }
    return 0;
}

int main() {
    ft_substr_test();
    return 0;
}
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t size;
	char	*p;
	
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (size < len)
		len = size;
	p = malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	i = 0;
	s += start;
	while (i < len)
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
