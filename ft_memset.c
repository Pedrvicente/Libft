/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedde-al <pedde-al@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:00:08 by pedde-al          #+#    #+#             */
/*   Updated: 2025/10/28 14:09:09 by pedde-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*s1;

	i = 0;
	s1 = (unsigned char *)s;
	while (i < n)
	{
		s1[i] = c;
		i++;
	}
	return (s1);
}

/* int main()
{
	char str[] = "ola";
	ft_memset(str, 'a', 5);
	printf("%s", str);
	return (0);
} */