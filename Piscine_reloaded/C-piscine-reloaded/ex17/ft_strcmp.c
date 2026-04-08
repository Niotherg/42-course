/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magulyas <magulyas@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 12:15:20 by magulyas          #+#    #+#             */
/*   Updated: 2026/03/18 11:11:52 by magulyas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// compares two strings and returns:
// 0 = if the strings are equal
// 0 > if s1 is less than s2
// 0 < if s1 is greater than s2
int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0' && *s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/* int	main(void)
{
	char	*s1;
	char	*s2;
	int		diff;

	s1 = "AB";
	s2 = "ABC";
	diff = ft_strcmp(s1, s2);
	printf("%d", diff);
}
 */