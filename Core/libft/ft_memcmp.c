/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magulyas <magulyas@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 17:14:23 by magulyas          #+#    #+#             */
/*   Updated: 2026/05/13 11:13:58 by magulyas         ###   ########.fr       */
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
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	ft_putnbr_fd(ft_memcmp("abc", "abd", 3), 1);
	ft_putchar_fd('\n', 1);
	return (0);
}
*/
