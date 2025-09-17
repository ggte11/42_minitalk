/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcardoso <mcardoso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:28:08 by mcardoso          #+#    #+#             */
/*   Updated: 2025/04/25 12:35:06 by mcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}

/* void	upup(unsigned int i, char *c)
{
	if(i % 2 == 0)
		*c = ft_toupper(*c);
}

int	main()
{
	char s[] = "Hello World";
	ft_striteri(s, upup);
	printf("Result: %s\n", s);
	return (0);
} */