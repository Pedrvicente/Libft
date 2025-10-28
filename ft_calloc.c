/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedde-al <pedde-al@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:27:20 by pedde-al          #+#    #+#             */
/*   Updated: 2025/10/21 16:21:41 by pedde-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			total;
	size_t			i;
	unsigned char	*str;

	total = nmemb * size;
	str = (unsigned char *)malloc(total);
	if (!str)
		return (NULL);
	i = 0;
	while (i < total)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}

/* int main(void)
{
	int	i;

	i = 0;
    int *arr = ft_calloc(10, sizeof(int));

    if (!arr)
        return 1;

    while(i < 10)
	{
        printf("%d ", arr[i]);
		i++;
	}
    printf("\n");

    free(arr);
    return 0;
} */