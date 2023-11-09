/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:57:30 by atahtouh          #+#    #+#             */
/*   Updated: 2023/11/03 20:50:33 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
void	*ft_memchr(const void *s, int c, size_t n)
{
    const char *p = s;
    size_t i;
	i = 0;
	while(p[i] != '\0' && i < n)
	{
		if(p[i] == c)
		{
		break;
		}
		i++;	
	}
	return((char *)s + i);
}

#include <stdio.h>
#include <string.h>

int main() {
    const char *str = "Hell5o, World!";
    int c = '5';
    size_t n = strlen(str);
    void *ptr = ft_memchr(str, c, n);
    if (ptr != NULL) {
        printf("'%c' position: %ld\n", c, (char *)ptr - str);
    }

    return 0;
}