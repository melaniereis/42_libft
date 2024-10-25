/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 13:31:20 by meferraz          #+#    #+#             */
/*   Updated: 2024/10/25 16:19:19 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*# define RESET "\033[0m"
# define GREEN "\033[0;32m"
# define RED "\033[0;31m"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
char example_function(unsigned int index, char c);

char example_function(unsigned int index, char c) {
    return c + index; // Example transformation
}

void assert_equal(const char *test_name, char *result, const char *expected) {
    if (result && strcmp(result, expected) == 0) {
        printf("%s[✔] %s passed (Got: \"%s\")%s\n", GREEN, test_name, result, RESET);
    } else if (!result && expected == NULL) {
        printf("%s[✔] %s passed (Got: NULL)%s\n", GREEN, test_name, RESET);
    } else {
        printf("%s[✖] %s failed (Expected: \"%s\", Got: \"%s\")%s\n",
               RED, test_name, expected ? expected : "NULL",
               result ? result : "NULL", RESET);
    }
}

int ft_strmapi_test(void) {
    struct {
        char const *s;
        char (*f)(unsigned int, char);
        const char *expected;
        const char *test_name;
    } test_cases[] = {
        {"abc", example_function, "ace", 
         "Basic transformation"},
        {"xyz", example_function, "xz|", 
         "Transforming letters with index"},
        {"", example_function, "", 
         "Empty string"},
        {NULL, example_function, "", 
         "NULL string with non-NULL function"},
        {"abc", NULL, "abc", 
         "Non-NULL string with NULL function"},
        {"12345", example_function, "13579", 
         "Numeric characters transformation"},
        {"ABCDE", example_function, "ACEGI", 
         "Uppercase letters with transformation"},
        {NULL, NULL, "", "Testing with NULL parameters"},
    };

    int num_tests = sizeof(test_cases) / sizeof(test_cases[0]);
    printf("\n*************************************");
    printf("\n*     Running ft_strmapi() Tests    *\n");
    printf("*************************************\n");

    for (int i = 0; i < num_tests; i++) {
        char *result = ft_strmapi(test_cases[i].s, test_cases[i].f);
        if (test_cases[i].s == NULL && test_cases[i].f == NULL) {
            assert_equal(test_cases[i].test_name, result, NULL);
        } else if (test_cases[i].s == NULL) {
            assert_equal(test_cases[i].test_name, result, "");
        } else if (test_cases[i].f == NULL) {
            assert_equal(test_cases[i].test_name, result, "");
        } else {
            assert_equal(test_cases[i].test_name, result, test_cases[i].expected);
        }
        free(result); // Free allocated memory
    }

    return 0;
}

int main(void) {
    ft_strmapi_test();
    return 0;
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	size;
	char	*p;

	if (!f)
        return (ft_strdup(s));
	if (!s)
		return (ft_strdup(""));
	size = ft_strlen(s);
	p = malloc(sizeof(char) * (size + 1));
	if (!p)
		return (NULL);
	i = 0;
	while  (s[i])
	{
		p[i] = (*f)(i, s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}
