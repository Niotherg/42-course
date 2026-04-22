/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magulyas <magulyas@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:31:28 by magulyas          #+#    #+#             */
/*   Updated: 2026/04/22 18:22:07 by magulyas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Allocates memory (using malloc(3)) and returns a
copy of ’s1’ with characters from ’set’ removed
from the beginning and the end.
*/

#include "libft.h"

int	to_trim(char const *set, char c)
{
	int	i;
	
	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*new_str(char *s1, size_t start, size_t len)
{
	char	*str;
	size_t	i;

	if (len <= 0 || start >= ft_strlen(s1))
		return (ft_strdup(""));
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;

	while (i < len)
	{
		str[i] = s1[start + i];
		i++;
	}
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(s1) - 1;
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	while (to_trim(set, s1[i]))
		i++;

	while (to_trim(set, s1[j]))
		j--;
	return (new_str(s1, i, j - (i - 1)));
}
