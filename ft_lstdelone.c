/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedde-al <pedde-al@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 12:46:12 by pedde-al          #+#    #+#             */
/*   Updated: 2025/10/27 13:24:13 by pedde-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/* int	main()
{
	char *str = malloc(6);
	if (!str)
		return (1);
	ft_strcpy(str, "Hello");
	t_list *node = ft_lstnew(str);
	ft_lstdelone(node, del);
	printf("Nó apagado com sucesso!\n");
    return 0;
} */
