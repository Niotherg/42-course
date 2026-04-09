/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magulyas <magulyas@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 17:13:29 by magulyas          #+#    #+#             */
/*   Updated: 2026/04/09 17:29:39 by magulyas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Checks if str contains only ASCII characters

int	ft_isascii(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 0 && str[i] <= 127))
			return (0);
		i++;
	}
	return (1);
}
