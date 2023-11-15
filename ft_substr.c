/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 08:45:28 by atahtouh          #+#    #+#             */
/*   Updated: 2023/11/15 11:09:41 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*p;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	p = (char *)malloc((len + 1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	while (s[i] != '\0' && i < start)
	{
	i++;
	}
	while (s[i] != '\0' && j < len)
	{
		p[j] = s[i];
		j++;
		i++;
	}
	p[j] = '\0';
	return (p);
}
