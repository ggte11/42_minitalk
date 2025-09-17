/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcardoso <mcardoso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 11:07:50 by mcardoso          #+#    #+#             */
/*   Updated: 2025/04/25 14:25:48 by mcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(temp, del);
	}
	*lst = NULL;
}

/* int	main()
{
	t_list	*node1 = malloc(sizeof(t_list));
	t_list	*node2 = malloc(sizeof(t_list));
	t_list	*node3 = malloc(sizeof(t_list));

	node1->content = ft_strdup("Hello");
	node2->content = ft_strdup("World");
	node3->content = ft_strdup("Rocket");

	node3->next = node2;
	node2->next = node1;
	node1->next = NULL;	

	printf("Before clear: %s\n", (char *)node2->content);
	ft_lstclear(&node1, &free);
	printf("After clearing list\n");
	return (0);
} */