/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcardoso <mcardoso@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:28:03 by mcardoso          #+#    #+#             */
/*   Updated: 2025/04/23 12:51:12 by mcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_len(const char *str, char len)
{
	int	i;

	i = 0;
	while (str[i] != len && str[i] != '\0')
		i++;
	return (i);
}

static int	count_words(const char *str, char sep)
{
	int	i;
	int	in_word;
	int	count;

	i = 0;
	count = 0;
	in_word = 0;
	while (str[i] != '\0')
	{
		if (str[i] != sep && in_word == 0)
		{
			count++;
			in_word = 1;
		}
		if (str[i] == sep)
			in_word = 0;
		i++;
	}
	return (count);
}

static char	**free_split(char **array, int current)
{
	while (current >= 0)
		free(array[current--]);
	free(array);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	res = (char **)malloc((words + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	while (i < words)
	{
		while (*s == c)
			s++;
		res[i] = (char *)malloc((word_len(s, c) + 1) * sizeof(char));
		if (!res[i])
			return (free_split(res, i));
		ft_strlcpy(res[i], s, word_len(s, c) + 1);
		s += word_len(s, c);
		i++;
	}
	res[i] = NULL;
	return (res);
}

/* int	main(void)
{
	char *frase = "  Hello   World  123  Frases  ";
	char sep = ' ';
	char **result;
	int i = 0;

	result = ft_split(frase, sep);
	if (!result)
	{
		printf("Erro ao alocar memoria\n");
		return (1);
	}
	printf("Resultado do split:\n");
	while (result[i])
	{
		printf("Palavra [%d]: \"%s\"\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
} */