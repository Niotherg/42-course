/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magulyas <magulyas@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 17:14:21 by magulyas          #+#    #+#             */
/*   Updated: 2026/04/22 15:44:55 by magulyas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
scans the initial n bytes of the memory area pointed to by s for the first
instance of c.  Both c and the bytes of the memory area pointed to by s are
interpreted as unsigned char.

Return a pointer to the matching byte or NULL if the character does not
occur in  the  givenmemory area.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*src;

	src = s;
	while (n > 0)
	{
		if (*src == c)
			return (src);
		n--;
	}
	return (NULL);
}
