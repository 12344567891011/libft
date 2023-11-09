/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:59:35 by atahtouh          #+#    #+#             */
/*   Updated: 2023/11/07 11:00:43 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while(*s != '\0')
	{
		if(*s == c)
		break;
		s++;	
	}
	return((char *)s);
}

#include <stdio.h>
#include <string.h>

int main() {
    const char *str = "Hello, World!";
    char ch = 's';

    // Find the first occurrence of 'o'
    char *firstOccurrence = ft_strchr(str, ch);
    if (firstOccurrence != NULL) {
        printf("First occurrence of '%c': %s\n", ch, firstOccurrence);
    } else {
        printf("'%c' not found.\n", ch);
    }
    return 0;
}