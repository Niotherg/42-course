/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magulyas <magulyas@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:31:28 by magulyas          #+#    #+#             */
/*   Updated: 2026/05/13 11:13:58 by magulyas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Allocates memory (using malloc(3)) and returns a
copy of ’s1’ with characters from ’set’ removed
from the beginning and the end.
*/

#include "libft.h"

static int	in_set(char const *set, char c)
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

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && in_set(set, s1[start]))
		start++;
	while (end > start && in_set(set, s1[end - 1]))
		end--;
	return (ft_substr(s1, start, end - start));
}

/*
int	main(void)
{
	char	*result;

	result = ft_strtrim("  libft  ", " ");
	if (result)
	{
		ft_putstr_fd(result, 1);
		ft_putchar_fd('\n', 1);
		free(result);
	}
	return (0);
}
*/
