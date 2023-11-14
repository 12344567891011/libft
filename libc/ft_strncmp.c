/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:29:00 by atahtouh          #+#    #+#             */
/*   Updated: 2023/11/04 11:09:57 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;
	i = 0;
	while(s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
		break;
		i++;
	}
	if (i == n)
	{
        return 0;
	}
	return(s1[i] - s2[i]);
}
int main()
{
	char s[] = "asmae";
	char d[] = "asmd";
	printf("%d",ft_strncmp(s,d,4));
	return 0;
}