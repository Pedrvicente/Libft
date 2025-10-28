/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedde-al <pedde-al@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:10:05 by pedde-al          #+#    #+#             */
/*   Updated: 2025/10/21 18:00:09 by pedde-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*s1;

	i = 0;
	s1 = (char *)s;
	while (i < n)
	{
		s1[i] = 0;
		i++;
	}
}

/* int main()
{
	int i;

	i = 0;
	char str[] = "Hello";
	ft_bzero(str, 5);
	while(i < 6)
	{
		printf("%d", str[i]);
		i++;
	}
} */