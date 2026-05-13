/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magulyas <magulyas@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 17:14:32 by magulyas          #+#    #+#             */
/*   Updated: 2026/05/13 11:13:58 by magulyas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Appends the NUL-terminated string src to the end of dst.  It will append at
// most size - strlen(dst) - 1 bytes, NUL-terminating the result.

#include "libft.h"

static size_t	dest_len(const char *dst, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size && dst[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	dlen = dest_len(dst, size);
	slen = ft_strlen(src);
	if (dlen == size)
		return (size + slen);
	i = 0;
	while (src[i] && (dlen + i) < (size - 1))
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (dlen + slen);
}

/*
int	main(void)
{
	char	buffer[12] = "abc";
	size_t	length;

	length = ft_strlcat(buffer, "def", sizeof(buffer));
	ft_putstr_fd(buffer, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd((int)length, 1);
	ft_putchar_fd('\n', 1);
	return (0);
}
*/
