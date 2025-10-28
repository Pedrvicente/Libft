/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedde-al <pedde-al@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 11:19:00 by pedde-al          #+#    #+#             */
/*   Updated: 2025/10/27 18:11:46 by pedde-al         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// função que duplica o conteúdo
void *dup_content(void *content)
{
    return strdup((char *)content);
}

// função del (necessária para ft_lstmap)
void del_content(void *content)
{
    free(content);
}

int main(void)
{
    t_list *n1 = ft_lstnew(strdup("ola"));
    t_list *n2 = ft_lstnew(strdup("42"));
    n1->next = n2;

    t_list *new = ft_lstmap(n1, dup_content, del_content);

    printf("%s\n", (char *)new->content);        
    printf("%s\n", (char *)new->next->content);

    ft_lstclear(&n1, del_content);
    ft_lstclear(&new, del_content);
    return 0;
}

