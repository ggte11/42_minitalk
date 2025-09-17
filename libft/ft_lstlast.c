/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcardoso <mcardoso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 13:17:38 by mcardoso          #+#    #+#             */
/*   Updated: 2025/04/21 20:47:51 by mcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	if (!lst)
		return (NULL);
	temp = lst;
	while (temp->next)
		temp = temp->next;
	return (temp);
}

/* int	main()
{
	t_list *n1 = ft_lstnew("um");
	t_list *n2 = ft_lstnew("dois");
	t_list *n3 = ft_lstnew("tres");

	n1->next = n2;
	n2->next = n3;

	t_list *last = ft_lstlast(n1);
	printf("Ultimo node: %s\n", (char *)last->content);
	free(n1);
	free(n2);
	free(n3);
	return (0);
} */