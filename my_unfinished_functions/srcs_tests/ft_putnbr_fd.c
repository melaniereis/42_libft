/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meferraz <meferraz@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:17:46 by meferraz          #+#    #+#             */
/*   Updated: 2024/10/24 17:31:43 by meferraz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	
	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb *= -1;
	}
	if (nb > 9)
		ft_putnbr_fd(nb / 10, fd);
	ft_putchar_fd(nb % 10 + '0', fd);
}

// Main function to test ft_putnbr_fd
int main() {
    // Test case 1: Print to standard output
    printf("Test Case 1: Output to STDOUT\n");
    ft_putnbr_fd(12345, STDOUT_FILENO);
    ft_putchar_fd('\n', STDOUT_FILENO); // Newline for better readability

    // Test case 2: Print a negative number to standard output
    printf("Test Case 2: Output a negative number to STDOUT\n");
    ft_putnbr_fd(-67890, STDOUT_FILENO);
    ft_putchar_fd('\n', STDOUT_FILENO);

    // Test case 3: Print zero to standard output
    printf("Test Case 3: Output zero to STDOUT\n");
    ft_putnbr_fd(0, STDOUT_FILENO);
    ft_putchar_fd('\n', STDOUT_FILENO);

    // Test case 4: Print to a file
    int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1) {
        perror("Error opening file");
        return 1; // Exit if the file can't be opened
    }
    
    printf("Test Case 4: Output to a file (output.txt)\n");
    ft_putnbr_fd(123456, fd);
    ft_putchar_fd('\n', fd);
    
    close(fd); // Close the file after writing

    return 0;
}
