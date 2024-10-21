/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:15:14 by meferraz          #+#    #+#             */
/*   Updated: 2024/10/21 16:27:55 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef TEST_H
# define TEST_H

# include <>
#include <cwchar>

// Mandatory Part 1
int		ft_isalpha_test(int c);
int		ft_isdigit_test(int c);
int		ft_isupper_test(int c);
int		ft_islower_test(int c);
int		ft_isalnum_test(int c);
int		ft_isascii_test(int c);
int		ft_isprint_test(int c);
size_t	ft_strlen_test(const char *s);
void	*ft_memset_test(void *s, int c, size_t n);	
void	ft_bzero_test(void *s, size_t n);
void	*ft_memcpy_test(void *dest, const void *src, size_t n);
void	*ft_memmove_test(void *dest, const void *src, size_t n);
size_t	ft_strlcpy_test(char *dest, const char *src, size_t size);
size_t	ft_strlcat_test(char *dest, const char *src, size_t size);
int		ft_toupper_test(int c);
char	ft_tolower_test(char c);
char	*ft_strchr_test(const char *s, int c);
char	*ft_strrchr_test(const char *s, int c);
int		ft_strncmp_test(const char *s1, const char *s2, size_t n);
void	*ft_memchr_test(const void *s, int c, size_t n);
int		ft_memcmp_test(const void *s1, const void *s2, size_t n);
char	*ft_strnstr_test(const char *big, const char *little, size_t len);
int		ft_atoi_test(const char *nptr);
void	*ft_calloc_test(size_t nmemb, size_t size);
char	*ft_strdup_test(const char *s);

// Mandatory Part 2
char	*ft_substr_test(char const *s, unsigned int start, size_t len);
char	*ft_strjoin_test(char const *s1, char const *s2);
char	*ft_strtrim_test(char const *s1, char const *set);
char	**ft_split_test(char const *s, char c);
char	*ft_itoa_test(int n);
char	*ft_strmapi_test(char const *s, char (*f)(unsigned int, char));
void	ft_striteri_test(char *s, void (*f)(unsigned int, char *));
int		ft_putchar_fd_test(char c, int fd);
int		ft_putstr_fd_test(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

// Bonus Part

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new_node);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new_node);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
*/

#endif
