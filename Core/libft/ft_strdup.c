/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magulyas <magulyas@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 17:14:29 by magulyas          #+#    #+#             */
/*   Updated: 2026/04/22 15:45:35 by magulyas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// use malloc()

/*
	returns a pointer to a new string which is a duplicate of the string s.
	Memory for the new string is obtained with malloc(3), and can be freed with
	free(3).
*/

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	dest = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
