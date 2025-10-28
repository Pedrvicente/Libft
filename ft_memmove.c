/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedde-al <pedde-al@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:12:31 by pedde-al          #+#    #+#             */
/*   Updated: 2025/10/28 14:07:10 by pedde-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*s1;
	const unsigned char	*s2;
	size_t				i;

	s1 = (unsigned char *)dest;
	s2 = (const unsigned char *)src;
	if (s1 < s2)
	{
		i = 0;
		while (i < n)
		{
			s1[i] = s2[i];
			i++;
		}
	}
	else
	{
		while (n--)
			s1[n] = s2[n];
	}
	return (s1);
}

/* int main()
{
	char src[] = "12345";
	ft_memmove(src + 1, src, 4);
	printf("%s", src);
} */