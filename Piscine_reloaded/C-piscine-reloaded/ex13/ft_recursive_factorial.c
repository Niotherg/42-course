/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magulyas <magulyas@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 17:45:46 by magulyas          #+#    #+#             */
/*   Updated: 2026/03/23 20:11:44 by magulyas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
• Create a recursive function that returns the factorial of the given parameter.
• If the argument is not valid, the function should return 0.
• Overflows do not need to be handled; the function’s return value will be
  undefined in such cases.
*/

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/* int main(void)
{
	int nb;

	nb = 4;
	printf("%d", ft_recursive_factorial(nb));
} */
