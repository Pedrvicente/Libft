/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedde-al <pedde-al@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:29:55 by pedde-al          #+#    #+#             */
/*   Updated: 2025/10/28 13:36:40 by pedde-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*s1;
	const unsigned char	*s2;
	size_t	i;

	if (!dest && !src)
		return (NULL);
	s1 = (unsigned char *)dest;
	s2 = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	return (s1);
}

/* int main()
{
	char src[10] = "12345";
	ft_memcpy(src + 1, src, 3);
	printf("%s", src);
} */