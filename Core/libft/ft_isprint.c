/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magulyas <magulyas@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 17:13:37 by magulyas          #+#    #+#             */
/*   Updated: 2026/04/09 17:29:14 by magulyas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Checks if str contains only printable characters

int	ft_isprint(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}
