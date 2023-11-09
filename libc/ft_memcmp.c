/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 20:52:59 by atahtouh          #+#    #+#             */
/*   Updated: 2023/11/07 10:25:25 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char *p1 = s1;
	const char *p2 = s2;
	size_t i;
	i = 0;
	while(p1[i] != '\0' && p2[i] != '\0' && i < n)
	{
		if(p1[i] == p2[i])
		{
			break;
		}
		i++;
	}
	return (p1[i] - p2[i]);
	
}

#include <string.h>

int main() {
	char str1[] = "Hellb";
	char str2[] = "Hella";

printf("%d",memcmp(str1, str2, sizeof(str1)));
	return 0;
}