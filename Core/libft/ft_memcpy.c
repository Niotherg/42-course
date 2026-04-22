/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magulyas <magulyas@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 17:13:40 by magulyas          #+#    #+#             */
/*   Updated: 2026/04/22 15:45:09 by magulyas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Copies  n  bytes from memory area src to memory area dest.
// The memory areas must not overlap.

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int			i;
	char		*d;
	const char	*s;

	d = dest;
	s = src;
	if (n > 0)
	{
		i = 0;
		while (s[i] != '\0' && i < n - 1)
		{
			d[i] = s[i];
			i++;
		}
		d[i] = '\0';
	}
	dest = d;
	return (dest);
}
