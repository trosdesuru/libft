/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhernan <edhernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 13:03:38 by edhernan          #+#    #+#             */
/*   Updated: 2024/03/08 11:24:49 by edhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/* 
#include <stdio.h>

int main(void)
{
	char s[] = "Prueba";

//	printf("String len = %zu\n", ft_strlen("Hola"));
//	printf("String len = %d\n", (int) ft_strlen(s));
//	printf("String len = %d\n", (int) ft_strlen(""));
//	printf("fasdfasdfasddfsaf\n");
//	printf("int = %d\n", 5);
//	printf("char = %c, char in ascii = %c\n", 'e', 101);
	printf("string -> %s\n", s);
	return (0);
}
*/
