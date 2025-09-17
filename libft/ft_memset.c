/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcardoso <mcardoso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 14:28:25 by mcardoso          #+#    #+#             */
/*   Updated: 2025/04/16 17:22:55 by mcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*b_c;	

	i = 0;
	b_c = (unsigned char *)b;
	while (i < len)
	{
		b_c[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

/* int	main()
{
	char str1[10];
	char c = 'A';
	char a = 'C';
	size_t len = 10;
	ft_memset(str1, c, len);
	printf("ft_memset: %s\n", str1);
	char str2[10];
	memset(str2, a, len);
	printf("memset: %s\n", str2);
} */