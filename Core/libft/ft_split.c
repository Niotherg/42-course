/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magulyas <magulyas@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 18:23:31 by magulyas          #+#    #+#             */
/*   Updated: 2026/04/22 19:02:32 by magulyas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Allocates memory (using malloc(3)) and returns an
array of strings obtained by splitting ’s’ using
the character ’c’ as a delimiter.
Each string in the returned array is allocated
independently.
The array of pointers itself is also allocated
dynamically.
The returned array must be NULL terminated.
*/

#include "libft.h"

void	*ft_free(char **strs, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

int	count_words(char *s, char c)
{
	int	i;
	int	count;
	
	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] == c)
			i++;
	}
	return (count);
}

char	*word_dup(char *s, int start, int end)
{
	char	*word;
	int		i;

	word = (char *)malloc(sizeof(char) * (end - start + 1));
	if (word == 0)
		return (0);
	i = 0;
	while (start < end)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

char	**fill_split(char **tab, char *s, char c)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		start = i;
		while (s[i] != '\0' && s[i] != c)
			i++;
		if (i > start)
		{
			tab[j] = word_dup(s, start, i);
			if (tab[j] == 0)
				return (0);
			j++;
		}
		if (!tab[j])
			return (ft_free(tab, j));
	}
	tab[j] = 0;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		words;
	
	words = count_words(s, c);
	tab = (char **)malloc(sizeof(char *) * (words + 1));
	if (tab == 0)
		return (0);
	return (fill_split(tab, s, c));
}