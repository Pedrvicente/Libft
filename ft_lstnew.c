/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedde-al <pedde-al@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:07:21 by pedde-al          #+#    #+#             */
/*   Updated: 2025/10/28 14:09:40 by pedde-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

/* int main()
{
    t_list *n1 = ft_lstnew("");
    t_list *n2 = ft_lstnew("Segundo");
    t_list *n3 = ft_lstnew("Terceiro");

    n1->next = n2;
    n2->next = n3;

    t_list *tmp = n1;
    while (tmp != NULL)
    {
        printf("Conteudo: %s\n", tmp->content);
        tmp = tmp->next; 
    }
} */