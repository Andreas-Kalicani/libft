/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akalican <akalican@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:03:12 by akalican          #+#    #+#             */
/*   Updated: 2023/10/17 16:53:29 by akalican         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (s == NULL)
		return (0);
	while (s[i])
	{
		while (s[i] && (s[i] == c))
			i++;
		if (s[i])
			count++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (count);
}

static size_t	word_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && (s[i] != c))
		i++;
	return (i);
}

static char	*malloc_word(char const *s, char c)
{
	size_t	word_length;
	size_t	i;
	char	*word;

	i = 0;
	word_length = word_len(s, c);
	word = malloc(sizeof(char) * (word_length + 1));
	if (!word)
		return (NULL);
	while (i < word_length)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	free_all(char ***result, size_t words)
{
	size_t	count;
	size_t	i;

	count = -1;
	i = -1;
	while (words > ++count)
	{
		if ((*result)[count] == NULL)
		{
			while (words > ++i)
			{
				if ((*result)[i])
					free((*result)[i]);
			}
			free(*result);
			*result = NULL;
			return ;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	char	**split_arr;
	size_t	i;
	size_t	words;

	i = 0;
	words = count_words(s, c);
	if (s == NULL)
		return (NULL);
	split_arr = malloc(sizeof(char *) * (words + 1));
	if (!split_arr)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			split_arr[i++] = malloc_word(s, c);
		}
		while (*s && *s != c)
			s++;
	}
	split_arr[i] = NULL;
	free_all(&split_arr, words);
	return (split_arr);
}
