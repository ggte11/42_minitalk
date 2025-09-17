/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcardoso <mcardoso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:28:12 by mcardoso          #+#    #+#             */
/*   Updated: 2025/04/18 17:23:22 by mcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	srclen;
	size_t	destlen;
	size_t	i;

	i = 0;
	srclen = ft_strlen(src);
	destlen = ft_strlen(dest);
	if (size <= destlen)
		return (srclen + size);
	else
		ft_strlcpy(&dest[destlen], src, (size - destlen));
	return (destlen + srclen);
}

/* int	main()
{
	char dest[] = "Badre";
	char src[] = "AAAAAAAAA";
	size_t size = 6;

	size_t result = ft_strlcat(dest, src, size);
	printf("%s\n%s\n", src, dest);
	printf("Return value: %zu\n", result);
} */