/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magulyas <magulyas@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 20:12:40 by magulyas          #+#    #+#             */
/*   Updated: 2026/05/13 11:13:58 by magulyas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Adds the node ’new’ at the beginning of the list.
*/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*
int	main(void)
{
	t_list	*head;
	t_list	*new_head;

	head = ft_lstnew("tail");
	new_head = ft_lstnew("head");
	ft_lstadd_front(&head, new_head);
	ft_putstr_fd((char *)head->content, 1);
	ft_putchar_fd('\n', 1);
	ft_lstclear(&head, free);
	return (0);
}
*/
