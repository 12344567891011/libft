/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 09:38:07 by atahtouh          #+#    #+#             */
/*   Updated: 2023/11/07 10:36:12 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *p =(char*)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char*));
	if(p == NULL)
	{
	  return (NULL);
	}
	int i;
	i = 0;
	while(*s1 != '\0')
	{
		p[i++] = *s1++;
	}
	while(*s2 != '\0')
	{
		p[i++] = *s2++;
	}

	return (p);
}
int main (void){
	const char str[] = "asmae";
	char d[] = "th";
	printf("%s",ft_strjoin(str,d));
	return 0;
}