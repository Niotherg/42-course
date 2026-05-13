/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magulyas <magulyas@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 17:14:35 by magulyas          #+#    #+#             */
/*   Updated: 2026/05/13 11:13:58 by magulyas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// copies up to size - 1 characters from the NUL-terminated string src to dst,
// NUL-terminating the result.

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (size > 0)
	{
		i = 0;
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}

/*
int	main(void)
{
	char	buffer[8];
	size_t	length;

	length = ft_strlcpy(buffer, "libft", sizeof(buffer));
	ft_putstr_fd(buffer, 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd((int)length, 1);
	ft_putchar_fd('\n', 1);
	return (0);
}
*/
