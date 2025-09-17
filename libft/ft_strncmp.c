/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcardoso <mcardoso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:28:21 by mcardoso          #+#    #+#             */
/*   Updated: 2025/04/23 13:44:31 by mcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < n - 1)
		i++;
	return (((unsigned char)s1[i]) - ((unsigned char)s2[i]));
}

/* int	main()
{
	char str1[30] = "abcdefgh";
	char str2[30] = "abcdwxyz";
	printf("%i\n", ft_strncmp(str1, str2, 4));
	printf("%i\n", strncmp(str1, str2, 4));
} */