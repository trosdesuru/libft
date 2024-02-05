/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhernan <edhernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 02:30:58 by edhernan          #+#    #+#             */
/*   Updated: 2024/02/05 12:05:59 by edhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	x;
	int		check;

	check = 0;
	if (n == -2147483648)
	{
		write(fd, "-", 1);
		x = '8';
		ft_putnbr_fd(214748364, fd);
	}
	else if (n < 0)
	{
		write(fd, "-", 1);
		check = 1;
		ft_putnbr_fd(n * -1, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		x = (n % 10) + '0';
	}
	else
		x = (n % 10) + '0';
	if (check != 1)
		write(fd, &x, 1);
}
