/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magulyas <magulyas@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 18:59:59 by magulyas          #+#    #+#             */
/*   Updated: 2026/04/08 17:13:47 by magulyas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
 This function divides parameters a by b and stores the result in the int
 pointed by div. It also stores the remainder of the division of a by b in
 the int pointed by mod.
*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* int	main(void)
{
	int div;
	int mod;
	int a = 10;
	int b = 3;
	ft_div_mod(a, b, &div, &mod);
	printf("%d", div);
	printf("\n");
	printf("%d", mod);
} */
