/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magulyas <magulyas@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 17:07:39 by magulyas          #+#    #+#             */
/*   Updated: 2026/03/23 20:10:52 by magulyas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
• Create an iterative function that returns a number. This number should
  be the result of a factorial operation based on the given parameter.
• If the argument is not valid, the function should return 0.
• Overflows do not need to be handled; the function’s return value will be
  undefined in such cases.
*/
int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	result = 1;
	while (nb > 1)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}

/* int main(void)
{
	int nb;

	nb = 4;
	printf("%d", ft_iterative_factorial(nb));
} */