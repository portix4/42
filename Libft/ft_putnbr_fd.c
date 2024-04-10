/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pportill <pportill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 17:50:34 by pportill          #+#    #+#             */
/*   Updated: 2024/04/03 18:10:22 by pportill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	c = n % 10 + '0';
	write(fd, &c, 1);
}

/*int main() {
    ft_putnbr_fd(42, 1);
    write(1, "\n", 1); 

    ft_putnbr_fd(-42, 1);
    write(1, "\n", 1);

    ft_putnbr_fd(2147483647, 1);
    write(1, "\n", 1); 

    ft_putnbr_fd(-2147483648, 1);
    write(1, "\n", 1); 

    return 0;
}*/	