/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 09:23:59 by atahtouh          #+#    #+#             */
/*   Updated: 2023/11/18 13:56:29 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    if (!lst || !f)
       return(NULL);
    t_list *ls;
    t_list *ls_node;
    void *cont;
    
    ls = NULL;
    while (lst)
    {
        cont = ft_lstnew(lst->content);
        ls_node = f(cont);
        if (!ls)
        {
            del(cont);
            ft_lstdelone(ls,del);
            return(NULL);
        }
        
        lst = lst->next;
    }
    return(ls);
}