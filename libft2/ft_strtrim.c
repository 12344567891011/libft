/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:00:37 by atahtouh          #+#    #+#             */
/*   Updated: 2023/11/07 11:51:15 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char *ft_strncpy(char * dst, const char * src, size_t len)
{
	size_t i;
	i = 0;
	while(src[i] != '\0' && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char *ft_strtrim(char const *s1, char const *set)
{
	size_t len1;
	size_t i;
	size_t j;
	len1 = ft_strlen(s1);
	i = 0;
	j = len1 - 1;
	while(i < len1)
	{
		if(ft_strchr(set , s1[i]) == NULL)
			break;
		i++;
	}
	while(j > i)
	{
	if(ft_strchr(set , s1[j]) == NULL)
		break;
	j--;
	}
	char *last;
	size_t len2;
	len2 = j - i + 1;
	last = (char *)malloc((len2 + 1) * sizeof(char));
	if(last == NULL)
	{
		return NULL;
	}
	ft_strncpy(last, s1 + i, len2);
	last[len2] = '\0';
	return (last);
}
int main() {
    const char* input = "a cc rfgdfcga";
    const char* set = "abc";
    char* trimmed = ft_strtrim(input, set);

    if (trimmed != NULL) {
        printf("Input: '%s'\n", input);
        printf("Set: '%s'\n", set);
        printf("Trimmed: '%s'\n", trimmed);

        // Libérer la mémoire allouée pour la chaîne trimmée
        free(trimmed);
    } else {
        printf("Erreur d'allocation mémoire.\n");
    }

    return 0;
}