/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcardoso <mcardoso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 12:41:54 by mcardoso          #+#    #+#             */
/*   Updated: 2025/04/16 17:22:41 by mcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*temp_s;
	unsigned char	temp_c;

	temp_s = (unsigned char *) s;
	temp_c = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (temp_s[i] == temp_c)
			return ((void *) &temp_s[i]);
		i++;
	}
	return (NULL);
}

/* int	main()
{
	int c = 'o';
	size_t len = 6;
	const char str[10] = "Hello";

	void *res = ft_memchr(str, c, len);
	if (res)
		printf("Encontrado: %s\n", (char *)res);
	else
		printf("Caractere não encontrado.\n");

	return 0;
} */