#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char	*word_dup(char const *s, size_t start, size_t end)
{
	char	*word;
	size_t	i;

	word = (char *)malloc(end - start + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

static void	free_words(char **tab, size_t count)
{
	while (count > 0)
		free(tab[--count]);
	free(tab);
}

static int	add_word(char **tab, char const *s, size_t *j, size_t pos[2])
{
	tab[*j] = word_dup(s, pos[0], pos[1]);
	if (!tab[*j])
	{
		free_words(tab, *j);
		return (0);
	}
	(*j)++;
	return (1);
}

static int	fill_words(char **tab, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	pos[2];

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		pos[0] = i;
		while (s[i] && s[i] != c)
			i++;
		pos[1] = i;
		if (pos[1] > pos[0] && !add_word(tab, s, &j, pos))
			return (0);
	}
	tab[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	if (!s)
		return (NULL);
	tab = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!tab)
		return (NULL);
	if (!fill_words(tab, s, c))
		return (NULL);
	return (tab);
}
