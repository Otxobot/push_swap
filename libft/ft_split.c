/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 09:25:43 by abasante          #+#    #+#             */
/*   Updated: 2023/05/15 12:03:51 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/libft.h"

// static	size_t	ft_count(char const *string, char c);
// static size_t	ft_wordlen(char const *string, char c);

static	size_t	ft_count(char const *string, char c)
{
	size_t	check;
	size_t	number_of_words;

	check = 1;
	number_of_words = 0;
	while (*string)
	{
		if (*string == c)
			check = 1;
		else if (check == 1)
		{
			check = 0;
			number_of_words++;
		}
		string++;
	}
	return (number_of_words);
}

static size_t	ft_wordlen(char const *string, char c)
{
	size_t	i;

	i = 0;
	while ((string[i] != '\0') && string[i] != c)
	{
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	array = malloc((ft_count(s, c) + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			array[i] = ft_substr(s, 0, ft_wordlen(s, c));
			if (!array[i])
				return (NULL);
			s += ft_wordlen(s, c);
			i++;
		}
		else
			s++;
	}
	array[i] = NULL;
	return (array);
}
