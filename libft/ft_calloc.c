/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcardoso <mcardoso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:34:14 by mcardoso          #+#    #+#             */
/*   Updated: 2025/04/22 12:59:40 by mcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*temp;

	if (size == 0 || nmemb == 0)
		return (malloc(0));
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	temp = malloc(nmemb * size);
	if (!temp)
		return (NULL);
	ft_bzero(temp, (nmemb * size));
	return (temp);
}

/* int	main(void)
{
	size_t	nmemb = 4;
	size_t	size = sizeof(int);

	void *ptr = ft_calloc(nmemb, size);
	printf("Calloc aplicado (endereco): %p\n", ptr);

	int	*array = (int *)ptr;
	if (array)
	{
		printf("array[0] = %d\n", array[0]);
		printf("array[1] = %d\n", array[1]);
		printf("array[2] = %d\n", array[2]);
		printf("array[3] = %d\n", array[3]);
	}
	free(ptr);
	return (0);
} */