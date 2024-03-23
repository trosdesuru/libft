/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhernan <edhernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 02:22:19 by edhernan          #+#    #+#             */
/*   Updated: 2024/03/23 10:20:46 by edhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	s_len;
	size_t	i;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	new_str = (char *)malloc(len + 1);
	if (!new_str)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		new_str[i] = s[start + i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

/*
#include <stdio.h>

int main() 
{
	const char		*input_string = "Lorem Ipsum, my name is Edu";
	unsigned int 	start = 3;
	size_t			len = 10;
	
	char *result = ft_substr(input_string, start, len);
	if (result)
	{
		printf("Resultado: %s\n", result);
		free(result); // No olvides liberar la memoria después de su uso
	}
	else
	{
		printf("Error de asignación de memoria.\n");
	}
	return 0;
}*/
