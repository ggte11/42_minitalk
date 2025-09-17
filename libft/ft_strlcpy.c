/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcardoso <mcardoso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:28:15 by mcardoso          #+#    #+#             */
/*   Updated: 2025/04/16 17:19:58 by mcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	srclen;

	i = 0;
	srclen = 0;
	if (!src)
		return (0);
	while (src[srclen] != '\0')
		srclen++;
	if (size == 0)
		return (srclen);
	if (size > 0)
	{
		while (src[i] != '\0' && (i < size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (srclen);
}

/* int main()
{
	char src[] = "Hello World!";
	char dest[20];
	size_t size = 16;

	size_t result = ft_strlcpy(dest, src, size);
	printf("ft_strlcpy(%s): %s\n", src, dest);
	printf("Length of source string: %zu\n", result);

	return (0);
} */