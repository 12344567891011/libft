/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 22:29:25 by atahtouh          #+#    #+#             */
/*   Updated: 2023/11/01 22:30:34 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	return(1);
	else
	return(0);
}

int main ()
{
	char c;
	c = '1';
	printf("%d", ft_isascii(c));
}