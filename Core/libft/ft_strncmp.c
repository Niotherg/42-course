/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magulyas <magulyas@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 17:14:38 by magulyas          #+#    #+#             */
/*   Updated: 2026/04/22 15:18:50 by magulyas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Returns an integer indicating the result of the comparison, as follows:
• 0, if the s1 and s2 are equal;
• a negative value if s1 is less than s2;
• a positive value if s1 is greater than s2.
It compares only the first (at most) n bytes of s1 and s2.
*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}
