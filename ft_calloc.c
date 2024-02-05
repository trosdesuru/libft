/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhernan <edhernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 02:20:51 by edhernan          #+#    #+#             */
/*   Updated: 2024/02/04 17:04:13 by edhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;
	int		i;

	i = 0;
	str = (void *)malloc(count * size);
	if (!(str))
		return (NULL);
	ft_bzero(str, count * size);
	return (str);
}
