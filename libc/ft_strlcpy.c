/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:13:38 by atahtouh          #+#    #+#             */
/*   Updated: 2023/11/07 10:20:37 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<stdio.h>
size_t ft_strlen(const char *s)
{
	size_t i;
	i = 0;
	while(s[i] != '\0')
	{
		i++;
	}
	return(i);
}
size_t  ft_strlcpy(char *dst,char *src, size_t dstsize)
{
	size_t i;
	i = 0;
	while(src[i] != '\0' && i < dstsize)
	{
		dst[i] = src[i];
		i++;
	} 
	dst[i] = '\0';
	return (ft_strlen(src));
}
int main()
{
  char c[] = {'a','s','v','r','p','o'};
  char d[10];
  printf("%zu",ft_strlcpy(d,c,2));
}