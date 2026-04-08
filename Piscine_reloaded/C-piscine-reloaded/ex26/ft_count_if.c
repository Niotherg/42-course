/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magulyas <magulyas@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 17:08:35 by magulyas          #+#    #+#             */
/*   Updated: 2026/03/26 19:24:43 by magulyas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
• Create a function ft_count_if, which returns the number of elements
in the array for which the function f does not return 0.
• This function will be applied in the order of the array.
*/

#include <unistd.h>

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}

/* //length == 1
int	is_short(char *str)
{
	return (str[1] == '\0');
}

void	ft_putnbr(int nb)
{
	char	c;
	
	if (nb >= 10)
		ft_putnbr(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);
}

int	main(void)
{
	char	*tab[5];

	tab[0] = "a";
	tab[1] = "bb";
	tab[2] = "c";
	tab[3] = "ddd";
	tab[4] = "e";
	ft_putnbr(ft_count_if(tab, 5, &is_short));
	write(1, "\n", 1);
	return (0);
} */