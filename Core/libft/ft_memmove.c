/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magulyas <magulyas@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 17:13:10 by magulyas          #+#    #+#             */
/*   Updated: 2026/04/09 17:28:50 by magulyas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Copies n bytes from memory area src to memory area dest.
The memory areas may overlap: copying takes place as though the
bytes in src are first copied into a temporary array that does not
overlap src or dest, and the bytes are then copied from the temporary
array to dest.
*/

#include <string.h>

char	fwd_cpy(char *d, const char *s, size_t n)
{
	size_t	i;

	i = n;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}

char	bwd_cpy(char *d, const char *s, size_t n)
{
	size_t	i;

	i = n;
	while (i > 0)
	{
		d[i - 1] = s[i - 1];
		i--;
	}
	return (d);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		i;

	d = dest;
	s = src;
	if (d == s || n == 0)
		return (dest);
	if (d < s)
	{
		d = fwd_cpy(d, s, n);
	}
	else
	{
		d = bwd_cpy(d, s, n);
	}
	return (dest);
}
