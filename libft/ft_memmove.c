/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcardoso <mcardoso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 14:57:27 by mcardoso          #+#    #+#             */
/*   Updated: 2025/04/23 13:31:33 by mcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*tmp_dst;
	char	*tmp_src;
	size_t	i;

	i = 0;
	tmp_dst = (char *)dest;
	tmp_src = (char *)src;
	if (tmp_dst > tmp_src)
	{
		while (n > 0)
		{
			tmp_dst[n - 1] = tmp_src[n - 1];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			tmp_dst[i] = tmp_src[i];
			i++;
		}
	}
	return (dest);
}

/* int	main()
{
	char src[] = "Hello";
	char dest[] = "Frome";

	printf("BEFORE: src: %s .dest: %s\n", src, dest);
	ft_memmove(dest, src, 4);
	printf("After: src: %s ,dest: %s\n", src, dest);
	char src1[] = "Hello";
	char dest1[] = "Frome";
	printf("BEFORE: src: %s .dest: %s\n", src1, dest1);
	memmove(dest1, src1, 4);
	printf("After: src: %s ,dest: %s\n", src1, dest1);
} */