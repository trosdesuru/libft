/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhernan <edhernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 02:38:42 by edhernan          #+#    #+#             */
/*   Updated: 2024/02/05 12:04:21 by edhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Copia un bloque de una direccion de memoria a otra
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*ptrdest;
	const unsigned char	*ptrsrc;
	size_t				i;

	if (!src && !dst)
		return (0);
	ptrdest = (unsigned char *)dst;
	ptrsrc = (const unsigned char *)src;
	if (ptrdest > ptrsrc)
	{
		while (len-- > 0)
		{
			ptrdest[len] = ptrsrc[len];
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			ptrdest[i] = ptrsrc[i];
			i++;
		}
	}
	return (dst);
}
