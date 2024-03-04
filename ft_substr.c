/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhernan <edhernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 11:12:07 by edhernan          #+#    #+#             */
/*   Updated: 2024/03/04 11:12:16 by edhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	str_len(char const *str)
{
	size_t	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

static char	*str_new(size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;
	size_t	j;

	if (!s || !(new_str = (char *)malloc(len + 1)))
		return (0);
	i = start;
	j = 0;
	while (i < lib_strlen(s) && j < len)
		new_str[j++] = s[i++];
	new_str[j] = '\0';
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
