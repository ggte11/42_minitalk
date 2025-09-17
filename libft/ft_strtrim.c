/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcardoso <mcardoso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:28:27 by mcardoso          #+#    #+#             */
/*   Updated: 2025/04/21 15:13:50 by mcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	int		start;
	int		end;
	int		i;
	char	*trim;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	i = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	trim = malloc((end - start + 1) * sizeof(char));
	if (!trim)
		return (NULL);
	while (start < end)
		trim[i++] = s1[start++];
	trim[i] = '\0';
	return (trim);
}

/* int	main(void)
{
	char *str = "alalalalHelloWorldalalalal";
	char *set = "al";
	char *res;
	res = ft_strtrim(str, set);
	printf("string trimmed: %s\n", res);
	free(res);
	return (0);
} */