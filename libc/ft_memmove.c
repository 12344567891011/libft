/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 21:42:47 by atahtouh          #+#    #+#             */
/*   Updated: 2023/11/05 15:17:53 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
 #include <string.h>
void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *d = dst;
    const unsigned char *s = src;
    int i;
    if (d < s)
    {
        i = 0;
    while(i < len)
    {
        d[i] = s[i];
        i++;
    }
    }
    else
    {
        i = len;
        while (i > 0)
        {
            d[i - 1] = s[i - 1];
            i--;
        }
    }
    return dst;
    
}
int main()
{
    char src[] = "hello world";
    printf("La chaîne copiée est : %s\n", ft_memmove(src + 3,src,5));
    printf("l'origine : %s",memmove(src + 3,src,1));
}