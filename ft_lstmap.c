/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 09:23:59 by atahtouh          #+#    #+#             */
/*   Updated: 2023/11/19 10:20:08 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    if (!lst || !f || !del)
       return(NULL);
    t_list *ls;
    t_list *ls_node;
    t_list *last;
    
    ls = NULL;
    last = NULL;
    while (lst)
    {
        ls_node = ft_lstnew(f(lst->content));
        if (!ls_node)
        {
            ft_lstclear(&ls,del);
            return(NULL);
        }
        if (!ls)
        {
           ls = ls_node;
           last = ls;
        }
        else
        {
            last->next = ls_node;
            last = ls_node;
        }
        lst = lst->next;
    }
    return(ls);
}