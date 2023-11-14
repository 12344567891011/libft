/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 20:25:16 by atahtouh          #+#    #+#             */
/*   Updated: 2023/11/10 20:42:34 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s)
{
	char *dup;
	dup = (char*)malloc(ft_strlen(s) * sizeof(char));
	
	if (dup != NULL)
	{
		ft_strcpy(dup,s);
	}
	return (dup);
	
}
