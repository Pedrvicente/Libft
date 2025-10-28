/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedde-al <pedde-al@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 11:17:00 by pedde-al          #+#    #+#             */
/*   Updated: 2025/10/23 14:50:00 by pedde-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

static int	in_set(char c, const char *set)
{
	size_t	j;

	j = 0;
	while (set[j])
	{
		if (set[j] == c)
			return (1);
		j++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	size_t	s1_len;
	char	*str;

	i = 0;
	start = 0;
	s1_len = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[s1_len])
		s1_len++;
	while (s1[start] && in_set(s1[start], set))
		start ++;
	end = s1_len;
	while (end > start && in_set(s1[end - 1], set))
		end--;
	str = malloc(end - start + 1);
	if (!str)
		return (NULL);
	while (start < end)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}

/* int main()
{
    char str[] = "  Ola   ";
    char set[] = " ";
    printf("%s", ft_strtrim(str, set));
} */
