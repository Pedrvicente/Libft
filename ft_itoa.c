/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedde-al <pedde-al@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 18:26:25 by pedde-al          #+#    #+#             */
/*   Updated: 2025/10/22 18:40:32 by pedde-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_intlen(int n)
{
    int len;
    
    if (n <= 0)
        len = 1;
    else
        len = 0;
    while (n != 0)
    {
        n /= 10;
        len++;
    }
    return (len);
}

char    *ft_itoa(int n)
{
    char    *str;
    long    nb;
    int     len;

    nb = n;
    len = ft_intlen(n);
    str = malloc(sizeof(char) * (len + 1));
    if (!str)
        return (NULL);
    str[len] = '\0';
    if (nb < 0)
    {
        str[0] = '-';
        nb *= -1;
    }
    if (nb == 0)
        str[len] = '0';
    while (nb > 0)
    {
        str[--len] = (nb % 10) + '0';
        nb /= 10;
    }
    return (str);
}

int main()
{
    printf("%s", ft_itoa(-42));
}
