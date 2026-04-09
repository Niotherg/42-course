/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magulyas <magulyas@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 17:14:18 by magulyas          #+#    #+#             */
/*   Updated: 2026/04/09 19:09:29 by magulyas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// use malloc()

/*
Allocates memory for an array of nmemb elements of size bytes each and returns
a pointer to  the  allocated memory.  The memory is set to zero.  If nmemb or
size is 0, then calloc() returns either NULL, or a unique pointer value that can
later be successfully passed to free().  If the multiplication of nmemb and size
would result in integer overflow, then  calloc() returns an error.

Returns a pointer to the allocated memory.
*/

#include <stdlib.h>

void *calloc(size_t nmemb, size_t size)
{
	size_t	*res;
	size_t i;
	size_t s;

	res = malloc(nmemb * size);
	if (res)
	{
		
	}
}