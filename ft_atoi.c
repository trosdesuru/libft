/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhernan <edhernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 19:12:53 by edhernan          #+#    #+#             */
/*   Updated: 2024/02/04 19:00:48 by edhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		a;
	int		i;
	int		sign;

	i = 0;
	a = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-' && sign == 1)
			sign *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
		a = a * 10 + (str[i++] - 48);
	return (a * sign);
}
