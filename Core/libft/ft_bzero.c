/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magulyas <magulyas@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 17:13:19 by magulyas          #+#    #+#             */
/*   Updated: 2026/04/24 17:42:07 by magulyas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Erases  the  data in the n bytes of the memory starting at the
location pointed to by s, by writing zeros (bytes containing '\0')
to that area.
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t		i;
	char		*str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}
