/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcardoso <mcardoso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 11:44:29 by mcardoso          #+#    #+#             */
/*   Updated: 2025/04/10 14:44:53 by mcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
	}
	return (c);
}

/* int main(int argc, char **argv)
{
	if (argc < 2)
		return (1);
	printf("ft_tolower(%c): %c\n", argv[1][0], ft_tolower(argv[1][0]));
	return (0);
} */