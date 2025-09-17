/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcardoso <mcardoso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 17:58:23 by mcardoso          #+#    #+#             */
/*   Updated: 2025/04/23 16:34:21 by mcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/* int	main()
{
	t_list *list = NULL;
	t_list *node1 = ft_lstnew("World");
	t_list *node2 = ft_lstnew("Hello");
	ft_lstadd_front(&list, node1);
	ft_lstadd_front(&list, node2);
	printf("%s\n", (char *)list->content);
	list = list->next;
	return (0);
} */