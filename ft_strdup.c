/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedde-al <pedde-al@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:59:08 by pedde-al          #+#    #+#             */
/*   Updated: 2025/10/21 16:29:16 by pedde-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	size;
	char	*str;

	i = 0;
	while (s[i])
		i++;
	size = i + 1;
	str = (char *)malloc(size);
	if (!(str))
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* int main()
{
	const char *original = "Hello 42!";
    char *copy = ft_strdup(original);

	printf("%s", copy);
} */