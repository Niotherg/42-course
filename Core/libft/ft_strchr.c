/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magulyas <magulyas@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 17:14:27 by magulyas          #+#    #+#             */
/*   Updated: 2026/04/22 15:45:30 by magulyas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Returns a pointer to the first occurrence of the character c in the string s.

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
	}
	return (NULL);
}
