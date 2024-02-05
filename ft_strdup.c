/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhernan <edhernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 17:57:45 by edhernan          #+#    #+#             */
/*   Updated: 2024/02/05 12:07:43 by edhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_stringlen(const char *str)
{
	size_t	n;

	n = 0;
	while (str[n] != '\0')
		n++;
	return (n);
}

char	*ft_strdup(const char *str)
{
	char	*dstr;
	int		i;

	dstr = (char *)malloc(ft_stringlen(str) + 1);
	if (!dstr)
		return (NULL);
	i = 0;
	while (str[i])
	{
		dstr[i] = str[i];
		i++;
	}
	dstr[i] = '\0';
	return (dstr);
}
