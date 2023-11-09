/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:39:00 by atahtouh          #+#    #+#             */
/*   Updated: 2023/11/07 10:22:28 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
size_t ft_strlen(const char *s)
{
	int i;
	i = 0;
	while(s[i] != '\0')
	{
		i++;
	}
	return(i);
}
size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t i;
	i = 0;
	while(src[i] != '\0')
	{
		dst[dstsize + i] = src[i];
		i++;
	}
	return(ft_strlen(dst) + ft_strlen(src));
}

int main() {
	char dst[7] = "Hello";
	const char *src = "World!";
	size_t dstsize = sizeof(dst);

	size_t result = strlcat(dst, src, dstsize);
	printf("Concatenated string: %s\n", dst);
	printf("Length of concatenated string: %zu\n", result);

	return 0;
}