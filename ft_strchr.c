/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhernan <edhernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 11:48:30 by edhernan          #+#    #+#             */
/*   Updated: 2024/02/08 17:06:33 by edhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Encuentra la primera aparición de un carácter en una cadena
char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != (char)c)
		i++;
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return ((char *) 0);
}

/*
#include <stdio.h>

void	my_print(char *result)
{
	if (result != NULL)
		printf("%s\n", result);
	else
		printf("NULL\n");
}

int main(void)
{
	char	s[]="Hola Mundo";
	char	s2[]="";
	char	*result;

	result = ft_strchr(s, 'x'); 
	my_print(result);

	result = ft_strchr(s, 'o');
	my_print(result);

	result = ft_strchr(s2, 'o');
	my_print(result);

	return (0);
}
*/
