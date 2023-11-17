/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 08:02:10 by atahtouh          #+#    #+#             */
/*   Updated: 2023/11/17 08:33:07 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *ls;
	t_list *lsnext;
	
	ls = *lst;
	while (ls != NULL)
	{
		lsnext = ls->next;
		del(ls->content);
		free(ls);
		ls = lsnext;
	}
	*lst = NULL;
}
