/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magulyas <magulyas@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 17:13:42 by magulyas          #+#    #+#             */
/*   Updated: 2026/04/22 15:45:23 by magulyas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Fills the first n bytes of the memory area pointed to by s
with the constant byte c.
*/

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int		i;
	char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
