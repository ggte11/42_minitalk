/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcardoso <mcardoso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 17:08:08 by mcardoso          #+#    #+#             */
/*   Updated: 2025/04/16 17:16:33 by mcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/* int main(int argc, char **argv)
{
	if (argc < 2)
		return (1);
	printf("ft_isascii(%c): %i\n", argv[1][0], ft_isascii(argv[1][0]));
	printf("ft_isascii(200): %i\n", ft_isascii(200));
	return (0);
} */