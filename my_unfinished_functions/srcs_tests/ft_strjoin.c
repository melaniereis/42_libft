/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:46:16 by meferraz          #+#    #+#             */
/*   Updated: 2024/10/25 10:46:18 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*# define RESET "\033[0m"
# define GREEN "\033[0;32m"
# define RED "\033[0;31m"
# define YELLOW "\033[0;33m"

char *ft_strjoin(char const *s1, char const *s2);

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

int ft_strjoin_test() {
    struct {
        char const *s1;
        char const *s2;
        const char *expected;
        const char *test_name;
    } test_cases[] = {
        {"Hello, ", "World!", "Hello, World!", "Normal case"},
        {"", "World!", "World!", "Empty s1"},
        {"Hello, ", "", "Hello, ", "Empty s2"},
        {"", "", "", "Both empty"},
        
        {NULL, "World!", NULL, "NULL s1"},      // Expecting NULL
        {"Hello, ", NULL, NULL, "NULL s2"},     // Expecting NULL
        {NULL, NULL, NULL, "Both NULL"},         // Expecting NULL
        {"123", "456", "123456", "Numeric strings"},
        {"Special @#$%^&* characters!", " are fun.", "Special @#$%^&* characters! are fun.", "Special characters"},
        {"  Leading and trailing spaces  ", "  ", "  Leading and trailing spaces    ", "Whitespace handling"},
    };

    int num_tests = sizeof(test_cases) / sizeof(test_cases[0]);
    printf("\n*************************************");
    printf("\n*     Running ft_strjoin() Tests    *\n");
    printf("*************************************\n");

    for (int i = 0; i < num_tests; i++) {
        char *result = ft_strjoin(test_cases[i].s1, test_cases[i].s2);
        assert_equal(test_cases[i].test_name, result, test_cases[i].expected);
        if (result != NULL) {
            free(result); // Free allocated memory only if result is not NULL
        }
    }

    return 0;
}

int main() {
    ft_strjoin_test();
    return 0;
}*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	size_s1;
	size_t	size_s2;
	char	*p;

	if (!s1 || !s2)
		return (NULL);
	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	p = malloc(sizeof(char) * (size_s1 + size_s2 + 1));
	if (!p)
		return (NULL);
	i = -1;
	while (++i < size_s1)
		p[i] = s1[i];
	i = 0;
	while (i < size_s2)
	{
		p[size_s1 + i] = s2[i];
		i++;
	}
	p[size_s1 + i] = '\0';
	return (p);
}
