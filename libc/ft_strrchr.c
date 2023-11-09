/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 18:31:30 by atahtouh          #+#    #+#             */
/*   Updated: 2023/11/03 18:36:55 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strrchr(const char *s, int c)
{
	int t;
	int i;
	i = 0;
	while(s[i] != '\0')
	{
		if(s[i] == c)
		{
		t = i;
		}
		i++;	
	}
	return((char *)s+t);
}
#include <stdio.h>
#include <string.h>

int main() {
    const char *str = "Helolqw, Waorld!";
    char ch = 'o';
    // Find the last occurrence of 'o'
    char *lastOccurrence = strrchr(str, ch);
    if (lastOccurrence != NULL) {
        printf("Last occurrence of '%c': %s\n", ch, lastOccurrence);
    } else {
        printf("'%c' not found.\n", ch);
    }

    return 0;
}