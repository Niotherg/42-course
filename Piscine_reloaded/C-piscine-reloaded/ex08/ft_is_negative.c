/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magulyas <magulyas@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 11:36:49 by magulyas          #+#    #+#             */
/*   Updated: 2026/03/09 16:30:25 by magulyas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

void	ft_is_negative(int n)
{
	int	response;

	if (n < 0)
	{
		response = 'N';
	}
	if (n >= 0)
	{
		response = 'P';
	}
	write(1, &response, 1);
}

/* int	main(void)
{
	int	n1;
	int	n2;
	int	n3;

	n1 = 10;
	n2 = -3;
	n3 = 0;
	ft_is_negative(n1);
	ft_is_negative(n2);
	ft_is_negative(n3);
} */
