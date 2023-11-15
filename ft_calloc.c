/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 12:38:37 by atahtouh          #+#    #+#             */
/*   Updated: 2023/11/15 10:51:50 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	n;
	char	*ptr;

	n = nmemb * size;
	ptr = (char *)malloc(n * sizeof(char));
	if (ptr != NULL)
	{
		ft_memset(ptr, 0, n);
	}
	return ((void *)ptr);
}
