/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedde-al <pedde-al@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:31:31 by pedde-al          #+#    #+#             */
/*   Updated: 2025/10/28 14:44:31 by pedde-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
 #include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}

/* int main()
{
	char src[] = "Hello";
	char dest[10];
	printf("%zu", ft_strlcpy(dest, src, 6));
	printf("%s", dest);
} */