/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcardoso <mcardoso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 11:29:46 by mcardoso          #+#    #+#             */
/*   Updated: 2025/04/18 19:50:53 by mcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(long num)
{
	int			len;

	len = 0;
	if (num <= 0)
	{
		len++;
		num = -num;
	}
	while (num > 0)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*res;
	long	nb;

	nb = (long)n;
	size = count_digits(nb);
	res = malloc(sizeof(char) * (size + 1));
	if (!res)
		return (NULL);
	res[size--] = '\0';
	if (nb == 0)
		res[0] = '0';
	if (nb < 0)
	{
		res[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		res[size--] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (res);
}

/* int main (void)
{
	int	n;
	char *temp = ft_itoa(n);

	n = 0;
	printf("lenght of the number: %i\n", count_digits(n));
	printf("original number: %i\n", n);
	printf("char number: %s\n", temp);
	free(temp);
} */