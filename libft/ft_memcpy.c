/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcardoso <mcardoso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:02:38 by mcardoso          #+#    #+#             */
/*   Updated: 2025/04/23 16:15:21 by mcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*temp_dest;
	unsigned char	*temp_src;

	i = 0;
	temp_dest = (unsigned char *)dest;
	temp_src = (unsigned char *)src;
	while (i < n)
	{
		temp_dest[i] = temp_src[i];
		i++;
	}
	return (dest);
}

/* int main()
{
	char str1[] = "Biggest";
	char str2[] = "Worlds!";
	size_t size = 4;
	printf("str1 (original): %s\n", str1);
	printf("str2 (original): %s\n", str2);
	ft_memcpy(str1, str2, size);
	printf("\nApós ft_memcpy:\n");
	printf("str1 (modificada): %s\n", str1);
	return (0);
} */