/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedde-al <pedde-al@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:10:17 by pedde-al          #+#    #+#             */
/*   Updated: 2025/10/28 14:41:54 by pedde-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/* void    print_content(void *content)
{
    printf("%s\n", (char *)content);
}

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

int main(void)
{
    t_list *n1 = ft_lstnew("");
    t_list *n2 = ft_lstnew("");
    t_list *n3 = ft_lstnew("");

    n1->next = n2;
    n2->next = n3;

    ft_lstiter(NULL, print_content);

    return 0;
} */