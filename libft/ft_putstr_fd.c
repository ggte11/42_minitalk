/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcardoso <mcardoso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 11:43:40 by mcardoso          #+#    #+#             */
/*   Updated: 2025/04/25 12:24:26 by mcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s || fd < 0)
		return ;
	while (s[i] != '\0')
		write(fd, &s[i++], 1);
}

/* int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (argv[1] != NULL)
			ft_putstr_fd(argv[1], 1);
	}
	write (1, "\n", 1);
	return (0);
} */