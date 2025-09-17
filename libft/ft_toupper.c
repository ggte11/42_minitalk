/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcardoso <mcardoso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 11:44:25 by mcardoso          #+#    #+#             */
/*   Updated: 2025/04/16 17:17:27 by mcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

/* int main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	printf("ft_toupper(%c): %c\n", argv[1][0], ft_toupper(argv[1][0]));
	return (0);
} */