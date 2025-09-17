/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcardoso <mcardoso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 11:09:28 by mcardoso          #+#    #+#             */
/*   Updated: 2025/08/11 16:48:24 by mcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_coversion_format(va_list args, const char format)
{
	int	count;

	count = 0;
	if (!args)
		return (count);
	if (format == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (format == 's')
		count += ft_printstr(va_arg(args, char *));
	else if (format == 'p')
		count += ft_printpointer(va_arg(args, void *), 16, 0);
	else if (format == 'd')
		count += ft_putnbr(va_arg(args, int));
	else if (format == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		count += ft_putnbr(va_arg(args, unsigned int));
	else if (format == 'x')
		count += ft_printhexa(va_arg(args, unsigned int), format);
	else if (format == 'X')
		count += ft_printhexa(va_arg(args, unsigned int), format);
	else if (format == '%')
		count += ft_putchar('%');
	return (count);
}

static int	format_verificator(char c)
{
	if (c == 'c')
		return (1);
	else if (c == 's')
		return (1);
	else if (c == 'p')
		return (1);
	else if (c == 'd')
		return (1);
	else if (c == 'i')
		return (1);
	else if (c == 'u')
		return (1);
	else if (c == 'x')
		return (1);
	else if (c == 'X')
		return (1);
	else if (c == '%')
		return (1);
	else
		return (0);
}

int	ft_printf(const char *str, ...)
{
	int		count;
	va_list	args;
	size_t	i;

	if (!str)
		return (-1);
	va_start(args, str);
	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (!format_verificator(str[i + 1]))
				return (-1);
			count += ft_coversion_format(args, str[i + 1]);
			i += 2;
		}
		else
			count += ft_putchar(str[i++]);
	}
	va_end (args);
	return (count);
}

/* int	main()
{
	printf(" printf out\n%d printf length\n", printf("%    %d", 12));
	printf(" ft_printf out\n%d ft_printf length\n", ft_printf("%    %d", 12));
	// printf("hasdg %s ajkshdhas\n", "ola");
	// ft_printf("hasdg %s ajkshdhas\n", "ola");
} */