/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:00:37 by atahtouh          #+#    #+#             */
/*   Updated: 2023/11/15 13:06:27 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*last;
	size_t	len2;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (i < ft_strlen(s1))
	{
		if (ft_strchr((char *)set, s1[i]) == NULL)
			break ;
		i++;
	}
	while (j > i)
	{
		if (ft_strchr((char *)set, s1[j]) == NULL)
			break ;
		j--;
	}
	len2 = j - i + 1;
	last = (char *)malloc((len2 + 1) * sizeof(char));
	ft_strncpy(last, s1 + i, len2);
	last[len2] = '\0';
	return (last);
}
