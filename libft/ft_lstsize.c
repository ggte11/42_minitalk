/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcardoso <mcardoso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 19:52:20 by mcardoso          #+#    #+#             */
/*   Updated: 2025/04/25 12:33:22 by mcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*tmp;
	int		i;

	if (!lst)
		return (0);
	tmp = lst;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

/* int main()
{
	t_list *list = NULL;
	t_list *n1 = ft_lstnew("ONE");
	t_list *n2 = ft_lstnew("Two");
	t_list *n3 = ft_lstnew("Three");
	t_list *n4 = ft_lstnew("Quatro");

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	list = n1;
	int	size = ft_lstsize(list);
	printf("Tamanho da Lista:  %d\n", size);
	free(n1);
	free(n2);
	free(n3);
	free(n4);
	return (0);
} */