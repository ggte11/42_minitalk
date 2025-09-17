/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcardoso <mcardoso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 18:23:10 by mcardoso          #+#    #+#             */
/*   Updated: 2025/04/25 12:27:11 by mcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void	*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/* void	del(void *content)
{
	free(content);
}

int	main()
{
	t_list *node;

	char *str = strdup("Hello World");
	if (!str)
		return (1);
	node = ft_lstnew(str);
	if (!node)
	{
		free(str);
		return (1);
	}
	ft_lstdelone(node, del);
	return (0);
} */

/* int	main(void)
{
	t_list *n1, *n2, *n3;
	char *s1 = strdup("Node 1");
	char *s2 = strdup("Node 2");
	char *s3 = strdup("Node 3");

	// Verificações
	if (!s1 || !s2 || !s3)
		return (1);

	// Criar nós
	n1 = ft_lstnew(s1);
	n2 = ft_lstnew(s2);
	n3 = fmt_lstnew(s3);

	// Ligar os nós
	n1->next = n2;
	n2->next = n3;

	// Mostrar antes de apagar
	printf("Antes de apagar:\n");
	t_list *temp = n1;
	while (temp)
	{
		printf("- %s\n", (char *)temp->content);
		temp = temp->next;
	}

	// Apagar apenas o segundo nó (n2)
	ft_lstdelone(n2, del);
	n1->next = n3; // Ligar n1 diretamente a n3, já que n2 desapareceu

	// Mostrar depois de apagar
	printf("\nDepois de apagar o segundo nó:\n");
	temp = n1;
	while (temp)
	{
		printf("- %s\n", (char *)temp->content);
		temp = temp->next;
	}

	// Libertar o resto da lista (n1 e n3)
	ft_lstdelone(n1, del);
	ft_lstdelone(n3, del);

	return (0);
} */