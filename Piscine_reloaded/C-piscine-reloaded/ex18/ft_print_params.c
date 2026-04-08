/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magulyas <magulyas@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 14:11:23 by magulyas          #+#    #+#             */
/*   Updated: 2026/03/24 16:02:32 by magulyas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
• Since this is a program, your .c file must contain a main function.
• Write a program that displays its given arguments.
• Each argument should be printed on a new line, in the same order as
  in the command line.
• The program should display all arguments except argv[0].
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
