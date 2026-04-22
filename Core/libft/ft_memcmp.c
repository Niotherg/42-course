/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magulyas <magulyas@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 17:14:23 by magulyas          #+#    #+#             */
/*   Updated: 2026/04/22 15:45:03 by magulyas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Compares the first n bytes (each interpreted as unsigned char) of the memory
areas s1 and s2.

Returns an integer less than, equal to, or greater than zero if the first n
bytes of s1 is found, respectively, to be less than, to match, or be greater
than the first n bytes of s2.
For a nonzero return value, the sign is determined by the sign of the difference
between the first pair of bytes (interpreted  as unsigned char) that differ in
s1 and s2.
If n is zero, the return value is zero.
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*sp1;
	const char	*sp2;

	sp1 = s1;
	sp2 = s2;
	while (n > 0)
	{
		if (*sp1 != *sp2)
			return (*sp1 - *sp2);
		n--;
		sp1++;
		sp2++;
	}
	return (0);
}
