/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magulyas <magulyas@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 18:59:55 by magulyas          #+#    #+#             */
/*   Updated: 2026/04/08 15:53:13 by magulyas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
• Create a function that swaps the value of two integers whose addresses are
  entered as parameters.
*/
void	ft_swap(int *a, int *b)
{
	int	temp_a;

	temp_a = *a;
	*a = *b;
	*b = temp_a;
}

/* int	main(void)
{
	int	a = 10;
	int	b = 3;

	ft_swap(&a, &b);
	printf("%d", a);
	printf("\n");
	printf("%d", b);
} */
