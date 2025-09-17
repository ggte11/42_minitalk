/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcardoso <mcardoso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 11:41:29 by mcardoso          #+#    #+#             */
/*   Updated: 2025/04/23 16:33:28 by mcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	temp = lst;
	if (!lst || !f)
		return ;
	while (temp)
	{
		f(temp->content);
		temp = temp->next;
	}
}

/* void	upup(void *c)
{
	char *str = (char *)c;
	int	i = 0;
	while(str[i])
	{
		str[i] = ft_toupper(str[i]);
		i++;
	}
}

int	main()
{
	t_list	*node1;
	t_list	*node2;
	t_list	*list;

	char *s1 = ft_strdup("Hello");
	char *s2 = ft_strdup("World");

	node1 = ft_lstnew(s1);
	node2 = ft_lstnew(s2);

	node1->next = node2;
	list = node1;

	printf("Antes: %s -> %s\n", (char *)node1->content, (char *)node2->content);
	ft_lstiter(list, upup);
	printf("Depois: %s -> %s\n", (char *)node1->content, (char *)node2->content);

	free(s1);
	free(s2);
	free(node1);
	free(node2);

	return (0);
} */