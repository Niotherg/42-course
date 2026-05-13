/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magulyas <magulyas@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 20:34:35 by magulyas          #+#    #+#             */
/*   Updated: 2026/05/13 11:13:58 by magulyas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Iterates through the list ’lst’, applies the
function ’f’ to each node’s content, and creates
a new list resulting of the successive applications
of the function ’f’. The ’del’ function is used to
delete the content of a node if needed.
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;

	if (!f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

/*
static void	*add_one(void *content)
{
	int	*copy;

	copy = malloc(sizeof(int));
	if (!copy)
		return (NULL);
	*copy = *(int *)content + 1;
	return (copy);
}

static void	print_int(void *content)
{
	ft_putnbr_fd(*(int *)content, 1);
	ft_putchar_fd('\n', 1);
}

int	main(void)
{
	t_list	*head;
	t_list	*mapped;
	int		*first;
	int		*second;

	first = malloc(sizeof(int));
	second = malloc(sizeof(int));
	if (!first || !second)
		return (1);
	*first = 1;
	*second = 2;
	head = ft_lstnew(first);
	ft_lstadd_back(&head, ft_lstnew(second));
	mapped = ft_lstmap(head, add_one, free);
	ft_lstiter(mapped, print_int);
	ft_lstclear(&head, free);
	ft_lstclear(&mapped, free);
	return (0);
}
*/
