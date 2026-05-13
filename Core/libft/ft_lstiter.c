/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magulyas <magulyas@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 20:32:13 by magulyas          #+#    #+#             */
/*   Updated: 2026/05/13 11:13:58 by magulyas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Iterates through the list ’lst’ and applies the
function ’f’ to the content of each node.
*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*
static void	print_content(void *content)
{
	ft_putstr_fd((char *)content, 1);
	ft_putchar_fd('\n', 1);
}

int	main(void)
{
	t_list	*head;

	head = ft_lstnew("one");
	ft_lstadd_back(&head, ft_lstnew("two"));
	ft_lstiter(head, print_content);
	ft_lstclear(&head, free);
	return (0);
}
*/
