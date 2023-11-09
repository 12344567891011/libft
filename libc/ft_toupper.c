/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:49:19 by atahtouh          #+#    #+#             */
/*   Updated: 2023/11/04 11:09:00 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if(c >= 97 && c <= 122)
	{
		return(c - 32);
	}
	return (c);
}
#include <stdio.h>
#include <ctype.h>

int main() {
	int ch = ' ';
	printf("Original character: %c\n", ch);
	printf("Uppercase character: %c\n",ft_toupper(ch));
	
	return 0;
}