/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edhernan <edhernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 02:24:04 by edhernan          #+#    #+#             */
/*   Updated: 2024/02/05 21:53:24 by edhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_counter_word(const char *s, char c)
{
	int	ctr;
	int	i;
	int	word;

	i = 0;
	word = 0;
	ctr = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			ctr++;
		else if (s[i] == c && ctr > 0)
		{
			ctr = 0;
			word++;
		}
		i++;
	}
	if (ctr > 0)
		word++;
	return (word);
}

static char	**ft_memory(char **array, char const *s, char c)
{
	int	i;
	int	ctr;
	int	x;

	i = 0;
	ctr = 0;
	x = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			ctr++;
		if ((s[i] == c && ctr > 0) || (s[i] != c && s[i + 1] == '\0'))
		{
			array[x] = malloc(sizeof(char) * (ctr + 1));
			if (!array[x])
				return (NULL);
			ctr = 0;
			x++;
		}
		i++;
	}
	return (array);
}

static char	**ft_copy(char **array, char const *s, char c)
{
	int	i;
	int	x;
	int	y;

	i = 0;
	x = 0;
	y = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			array[x][y++] = s[i];
		if (s[i] != c && s[i + 1] == '\0')
			array[x][y] = '\0';
		else if (s[i] == c && i > 0 && s[i - 1] != c)
		{
			array[x][y] = '\0';
			x++;
			y = 0;
		}
		i++;
	}
	return (array);
}

static char	**ft_free(char **array)
{
	int	i;

	i = 0;
	while (array[i] != NULL)
	{
		free(array[i]);
		array[i] = NULL;
		i++;
	}
	free(array);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**array;
	int		wordcount;

	if (!s)
	{
		array = malloc(sizeof(char) * 1);
		if (!array)
			return (NULL);
		*array = NULL;
		return (array);
	}
	wordcount = ft_counter_word(s, c);
	array = malloc(sizeof(*array) * (wordcount + 1));
	if (!array)
		return (NULL);
	if (ft_memory(array, s, c))
	{
		ft_copy(array, s, c);
		array[wordcount] = NULL;
	}
	else
		array = ft_free(array);
	return (array);
}
