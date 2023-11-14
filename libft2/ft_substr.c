/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 08:45:28 by atahtouh          #+#    #+#             */
/*   Updated: 2023/11/06 09:41:38 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>
char	*ft_substr(char const *s, unsigned int start,size_t len)
{
	char *p = (char*)malloc(len * sizeof(char*));
	if(p == NULL)
	{
		return (NULL);
	}
	unsigned int i;
	unsigned int j;
	i = 0;
	j = 0;
	while(s[i] != '\0' && i != start)
	{
	i++;
	}
	i = i - 1;
	while(s[i] != '\0' && j < len)
	{
		p[j] = s[i];
		j++;
		i++;
	}
	p[j] = '\0';
	return (p);
}
int main(void)
{
	char d[] ="17/09/2002";
	printf("%s\n",ft_substr(d,7,4));
}