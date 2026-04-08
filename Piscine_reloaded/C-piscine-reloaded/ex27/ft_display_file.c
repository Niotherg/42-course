/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magulyas <magulyas@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 17:08:52 by magulyas          #+#    #+#             */
/*   Updated: 2026/04/08 17:18:45 by magulyas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Allowed functions: close, open, read, write
• Create a program called ft_display_file that displays, on the standard output,
  only the content of the file given as an argument.
• The submission directory should contain a Makefile with the following rules:
  all, clean, fclean. The binary must be named ft_display_file.
• The use of the malloc function is forbidden. You must complete this exercise by
  declaring a fixed-size array.
• All files given as arguments will be valid.
• Error messages must be displayed on their designated output, followed by a new
  line.
• If no argument is given, it should display:
  File name missing.
• If more than one argument is given, it should display:
  Too many arguments.
• If the file cannot be read, it should display:
  Cannot read file.
*/

#include <fcntl.h>
#include <unistd.h>

void	ft_putstr_err(char *str)
{
	while (*str)
	{
		write(2, str, 1);
		str++;
	}
}

int	arg_check(int argc)
{
	if (argc < 2)
	{
		ft_putstr_err("File name missing.\n");
		return (1);
	}
	if (argc > 2)
	{
		ft_putstr_err("Too many arguments.\n");
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		fd;
	int		bytes;
	char	buf[1024];

	arg_check(argc);
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		ft_putstr_err("Cannot read file.\n");
		return (1);
	}
	bytes = read(fd, buf, 1024);
	while (bytes > 0)
	{
		write(1, buf, bytes);
		bytes = read(fd, buf, 1024);
	}
	if (bytes < 0)
		ft_putstr_err("Cannot read file.\n");
	close(fd);
	return (0);
}
