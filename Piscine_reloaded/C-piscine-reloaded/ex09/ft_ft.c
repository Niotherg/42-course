/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magulyas <magulyas@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 15:48:03 by magulyas          #+#    #+#             */
/*   Updated: 2026/04/08 15:52:40 by magulyas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
• Create a function that takes a pointer to int as a parameter, and sets the
  value "42" to that int.
*/

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/* int	main(void)
{
	int	number;

	number = 1;
	ft_ft(&number);
	printf("%d", number);
}
 */