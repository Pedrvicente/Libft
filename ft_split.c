/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedde-al <pedde-al@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 12:01:15 by pedde-al          #+#    #+#             */
/*   Updated: 2025/10/28 15:23:26 by pedde-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static char	*word_copy(const char *s, char c)
{
	char	*w;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (s[len] && s[len] != c)
		len++;
	w = malloc(len + 1);
	if (!w)
		return (NULL);
	while (i < len)
	{
		w[i] = s[i];
		i++;
	}
	w[i] = '\0';
	return (w);
}

static void	free_split(char **res, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(res[i]);
		i++;
	}
	free(res);
}

char	**ft_split(const char *s, char c)
{
	char	**res;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	res = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!res)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			res[i] = word_copy(s, c);
			if (!res[i])
				return (free_split(res, i), NULL);
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	res[i] = NULL;
	return (res);
}

/* int	main(void)
{
	char	**result;
	int		i;

	result = ft_split(NULL, '-');
	if (!result)
	{
		printf("NULL");
		return (1);	
	}
	
	i = 0;
	while (result[i])
	{
		printf("%s\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
} */

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

/* int main()
{
	char *str = "ola pedro";
	printf("%d", count_words(str, ' '));
} */