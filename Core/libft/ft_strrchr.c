/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magulyas <magulyas@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 17:14:43 by magulyas          #+#    #+#             */
/*   Updated: 2026/05/13 11:13:58 by magulyas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Returns a pointer to the last occurrence of the character c in the string s.

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*pos;

	pos = NULL;
	while (*s)
	{
		if (*s == (char)c)
			pos = s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return ((char *)pos);
}

/*
int	main(void)
{
	char	*result;

	result = ft_strrchr("libft", 'f');
	if (result)
		ft_putstr_fd(result, 1);
	else
		ft_putstr_fd("NULL", 1);
	ft_putchar_fd('\n', 1);
	return (0);
}
*/
