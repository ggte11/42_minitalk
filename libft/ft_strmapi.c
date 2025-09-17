/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcardoso <mcardoso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:28:19 by mcardoso          #+#    #+#             */
/*   Updated: 2025/04/25 12:30:15 by mcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	char			*buffer;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	buffer = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	while (i < ft_strlen(s))
	{
		buffer[i] = (*f)(i, s[i]);
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}

/* char	my_func(unsigned int i, char c)
{
	if (i % 2 == 0)
		return ft_toupper(c);
	return (c);
}

int	main()
{
	char *s = "Hello World";
	char *res = ft_strmapi(s, my_func);
	printf("Original: %s\n", s);
	printf("Trasnformado: %s\n", res);
	free(res);
	return (0);
} */