/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedde-al <pedde-al@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:12:31 by pedde-al          #+#    #+#             */
/*   Updated: 2025/10/27 16:21:10 by pedde-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*s1;
	char	*s2;
	size_t	i;

	s1 = (char *)dest;
	s2 = (char *)src;
	if (s1 < s2)
	{
		i = 0;
		while (i < n)
		{
			s1[i] = s2[i];
			i++;
		}
	}
	else if (s1 > s2)
	{
		i = n;
		while (i > 0)
		{
			s1[i - 1] = s2[i - 1];
			i--;
		}
	}
	return (s1);
}

/* int main()
{
	char src[] = "12345";
	ft_memmove(src + 1, src, 4);
	printf("%s", src);
} */