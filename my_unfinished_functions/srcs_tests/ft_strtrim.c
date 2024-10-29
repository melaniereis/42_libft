/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:40:59 by meferraz          #+#    #+#             */
/*   Updated: 2024/10/25 11:41:01 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/libft.h"

/*# define RESET "\033[0m"
# define GREEN "\033[0;32m"
# define RED "\033[0;31m"

char *ft_strtrim(char const *s1, char const *set);

// Custom assertion function for clarity
void assert_equal(const char *test_name, char *result, const char *expected) {
    if (result && strcmp(result, expected) == 0) {
        printf("%s[✔] %s passed (Got: \"%s\")%s\n", GREEN, test_name, result, RESET);
    } else if (!result && expected == NULL) {
        printf("%s[✔] %s passed (Got: NULL)%s\n", GREEN, test_name, RESET);
    } else {
        printf("%s[✖] %s failed (Expected: \"%s\", Got: \"%s\")%s\n", RED, test_name, expected ? expected : "NULL", result ? result : "NULL", RESET);
    }
}

int ft_strtrim_test() {
    struct {
        char const *s1;
        char const *set;
        const char *expected;
        const char *test_name;
    } test_cases[] = {
        {"  Hello, World!  ", " ", "Hello, World!", "Trim spaces"},
        {"***Hello***", "*", "Hello", "Trim asterisks"},
        {"!!Hello!!", "!", "Hello", "Trim exclamation marks"},
        {"  Hello  ", " ", "Hello", "Trim leading and trailing spaces"},
        {"Hello", " ", "Hello", "No trimming needed"},
        {"", " ", "", "Empty string"},
        {"Hello", "", "Hello", "No trimming set"},
        
        {NULL, " ", NULL, "NULL s1"},       // Expecting NULL
        {"Hello", NULL, "Hello", "NULL set"}, // Should return original string
        {NULL, NULL, NULL, "Both NULL"},    // Both NULL should return NULL
        {"  Leading and trailing spaces  ", " ", "Leading and trailing spaces", "Only spaces trimmed"},
        {"abcde", "xyz", "abcde", "No characters in set"},
    };

    int num_tests = sizeof(test_cases) / sizeof(test_cases[0]);
    printf("\n*************************************");
    printf("\n*     Running ft_strtrim() Tests    *\n");
    printf("*************************************\n");

    for (int i = 0; i < num_tests; i++) {
        char *result = ft_strtrim(test_cases[i].s1, test_cases[i].set);
        assert_equal(test_cases[i].test_name, result, test_cases[i].expected);
        free(result); // Free allocated memory
    }

    return 0;
}

int main() {
    ft_strtrim_test();
    return 0;
}
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*p;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	end = ft_strlen(s1);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (s1[end - 1] && ft_strchr(set, s1[end - 1]))
		end--;
	p = ft_substr(s1, start, end - start);
	return (p);
}
