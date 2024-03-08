/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhernan <edhernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 17:39:13 by edhernan          #+#    #+#             */
/*   Updated: 2024/03/08 10:35:08 by edhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	1*ft_strjoin(char const *strdest, char const *strjoin)
{
	char	*str;
	size_t	i;
	size_t	j;

	str = ft_calloc(sizeof(char), ft_strlen(strdest) + ft_strlen(strjoin) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (strdest[i] != '\0')
	{
		str[i] = strdest[i];
		i++;
	}
	j = 0;
	while (strjoin[j] != '\0')
	{
		str[i + j] = strjoin[j];
		j++;
	}
	return (str);
}
