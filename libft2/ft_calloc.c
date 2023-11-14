/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 12:38:37 by atahtouh          #+#    #+#             */
/*   Updated: 2023/11/14 08:29:39 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t total_size;
	void *ptr;
	
	total_size = nmemb * size;
	ptr = malloc(total_size);

	if (ptr != NULL) {
		memset(ptr, 0, total_size);
	}

	return (ptr);
}