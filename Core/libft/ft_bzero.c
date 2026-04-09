/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magulyas <magulyas@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 17:13:19 by magulyas          #+#    #+#             */
/*   Updated: 2026/04/09 17:29:51 by magulyas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Erases  the  data in the n bytes of the memory starting at the
location pointed to by s, by writing zeros (bytes containing '\0')
to that area.
*/

#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	int		i;
	char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
