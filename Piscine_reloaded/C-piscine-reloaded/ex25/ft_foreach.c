/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magulyas <magulyas@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 17:05:41 by magulyas          #+#    #+#             */
/*   Updated: 2026/04/08 17:07:34 by magulyas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
• Create the function ft_foreach, which applies a given function to all
  elements of an integer array. This function should be applied in the
  order of the array.
*/

#include <unistd.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

/////////////////
/* void ft_putnbr(int nb)
{
	char	c;

	if (nb >= 10)
		ft_putnbr(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);
}

void	print_number(int n)
{
	ft_putnbr(n);
	write(1, " ", 1);
}

int	main(void)
{
	int	tab[5];
	int	i;

	i = 0;
	while (i < 5)
	{
		tab[i] = i + 1;
		i++;
	}
	ft_foreach(tab, 5, &print_number);
	write(1, "\n", 1);
	return (0);
} */