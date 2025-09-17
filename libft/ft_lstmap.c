/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcardoso <mcardoso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 12:13:46 by mcardoso          #+#    #+#             */
/*   Updated: 2025/04/21 16:50:59 by mcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_ele;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		new_ele = ft_lstnew(f(lst->content));
		if (!new_ele)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_ele);
		lst = lst->next;
	}
	return (new_lst);
}

/* void	del(void *c)
{
	free(c);
}

void	*upup(void *c)
{
	char	*str = (char *)c;
	int	i = 0;
	while (str[i])
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
	return (0);
}

int	main()
{
	t_list	*node1 = ft_lstnew(ft_strdup("Hello"));
	t_list	*node2 = ft_lstnew(ft_strdup("World"));
	t_list	*node3 = ft_lstnew(ft_strdup("or"));
	t_list	*node4 = ft_lstnew(ft_strdup("Not"));

	node1->next = node2;
	node2->next = node3;
	node3->next = node4;

	t_list	*new_list = ft_lstmap(node1, upup, del);

	printf("Original:\n");
	t_list *temp = node1;
	while(temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
	printf("\nMap result (upup):\n");
	temp = new_list;
	while (temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
	ft_lstclear(&node1, del);
	ft_lstclear(&new_list, del);

	return (0);
} */