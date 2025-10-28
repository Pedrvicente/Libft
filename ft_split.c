/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedde-al <pedde-al@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 12:01:15 by pedde-al          #+#    #+#             */
/*   Updated: 2025/10/27 13:56:45 by pedde-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*get_word(char const *str, int start, int end)
{
	size_t	i;
	char	*word;

	i = 0;
	word = malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	while (start < end)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

static void	*free_all(char **str, size_t i)
{
	while (i > 0)
		free(str[--i]);
	free(str);
	return (NULL);
}

static int	fill_words(char **str, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (s[j])
	{
		if (s[j] != c)
		{
			start = j;
			while (s[j] && s[j] != c)
				j++;
			str[i] = get_word(s, start, j);
			if (!str[i])
				return (free_all(str, i), 0);
			i++;
		}
		else
			j++;
	}
	str[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		in_word;
	size_t	count;
	size_t	i;

	if (!s)
		return (NULL);
	in_word = 0;
	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && !in_word && count++)
			in_word = 1;
		else if (s[i] == c)
			in_word = 0;
		i++;
	}
	str = malloc(sizeof(char *) * (count + 1));
	if (!str)
		return (NULL);
	if (!fill_words(str, s, c))
		return (NULL);
	return (str);
}

/* int main(void)
{
	char **res = ft_split("olsss\2olsss\2\2", '\2');
    int i = 0;
	if (!res)
		return (0);
    while (res[i])
    {
        printf("%s\n", res[i]);
        i++;
    }
    return (0);
} */
