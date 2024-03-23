/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhernan <edhernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:15:57 by edhernan          #+#    #+#             */
/*   Updated: 2024/02/08 21:20:12 by edhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
	printf("Test con A - 1 = %d\n", ft_isalnum('A' - 1));
	printf("Test con '' = %d\n", ft_isalnum(' '));
	printf("Test con 45 = %d\n", ft_isalnum(45));
	printf("Test con * = %d\n", ft_isalnum('*'));
	printf("Test con o + 25 = %d\n", ft_isalnum('o'));
	printf("\n");

	return (0);
}*/
