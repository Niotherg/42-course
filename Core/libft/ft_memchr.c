/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magulyas <magulyas@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 17:14:21 by magulyas          #+#    #+#             */
/*   Updated: 2026/05/13 11:13:58 by magulyas         ###   ########.fr       */
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
	const unsigned char	*src;
	size_t				i;

	i = 0;
	src = (const unsigned char *)s;
	while (i < n)
	{
		if (src[i] == (unsigned char)c)
			return ((void *)src + i);
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	char	*result;

	result = ft_memchr("libft", 'f', 5);
	if (result)
		ft_putstr_fd(result, 1);
	else
		ft_putstr_fd("NULL", 1);
	ft_putchar_fd('\n', 1);
	return (0);
}
*/
