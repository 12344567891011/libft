/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 21:16:21 by atahtouh          #+#    #+#             */
/*   Updated: 2023/11/07 10:19:50 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	const unsigned char *ps = src;
	unsigned char *pd = dst;
	size_t i = 0;

	while (i < n)
	{
		pd[i] = ps[i];
		i++;
	}

	return dst;
}
int main()
{
	char s[10] = "asmae";
	char des[3];
	printf("me %s",ft_memcpy(des,s,4));
}