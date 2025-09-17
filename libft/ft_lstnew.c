/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcardoso <mcardoso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 17:29:08 by mcardoso          #+#    #+#             */
/*   Updated: 2025/04/16 19:20:11 by mcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ele;

	ele = malloc(sizeof(t_list));
	if (!ele)
		return (NULL);
	ele->content = content;
	ele->next = NULL;
	return (ele);
}

/* int	main()
{
	char *content = "Hello, Worlds";

	t_list *new_node = ft_lstnew(content);
	printf("Content: %s\n", (char *)new_node->content);
	free(new_node);
	return (0);
} */