/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magulyas <magulyas@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 17:14:40 by magulyas          #+#    #+#             */
/*   Updated: 2026/04/09 18:58:24 by magulyas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Locates the first occurrence of the null-terminated string little in the string
big, where not more than len characters are searched.  Characters that appear
after a ‘\0’ character are not searched.
*/

#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;

	if (needle[0] == '\0')
		return (haystack);
	i = 0;
	while (needle[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j] != '\0')
			j++;
		if (needle[j] == '\0')
			return (&haystack[i]);
		i++;
	}
	return (0);
}
