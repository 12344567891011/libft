/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 09:11:04 by atahtouh          #+#    #+#             */
/*   Updated: 2023/11/07 10:26:01 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	i = 0;
	
	while(haystack[i] != '\0' && i < len)
	{
	   j = 0;
		while(needle[j] != '\0')
		{
			if(needle[j] != haystack[i + j])
			break;
		j++;
		}
		if(needle[j] == '\0')
		return((char *)(haystack + i));
		i++;
	}
	return (NULL);
}




int main() {
	const char *haystack = "Hello, World!";
	const char *needle = "or";
	//size_t len = strlen(haystack);

	char *result = ft_strnstr(haystack, needle, 4);

	if (result != NULL) {
		printf("Substring found: %s\n", result);
	} else {
		printf("Substring not found.\n");
	}

	return 0;
}