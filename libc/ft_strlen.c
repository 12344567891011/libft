/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 22:32:32 by atahtouh          #+#    #+#             */
/*   Updated: 2023/11/03 17:09:43 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
size_t ft_strlen(const char *s)
{
	int i;
	i = 0;
	while(s[i] != '\0')
	{
		i++;
	}
	return(i);
}

int main ()
{
	char c[5] = {'a','s','v'};
	printf("%zu",ft_strlen(c));
}