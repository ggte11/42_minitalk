/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcardoso <mcardoso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:28:30 by mcardoso          #+#    #+#             */
/*   Updated: 2025/04/25 12:47:51 by mcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	size_s;
	char	*buffer;

	i = 0;
	size_s = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start > size_s)
		return (ft_strdup(""));
	if (len > size_s - start)
		len = size_s - start;
	buffer = (char *)ft_calloc((len + 1), sizeof(char));
	if (!buffer)
		return (NULL);
	while (i < len)
	{
		buffer[i] = s[start + i];
		i++;
	}
	return (buffer);
}

/* int	main()
{
	char *str = "Hello people of this World";
	unsigned int start = 6;
	size_t len = 9;
	char *sub = ft_substr(str, start, len);

	printf("original: %s\n", str);
	printf("substring: %s\n", sub);
	free(sub);
	return (0);
} */