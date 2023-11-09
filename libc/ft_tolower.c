/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:57:36 by atahtouh          #+#    #+#             */
/*   Updated: 2023/11/04 11:08:28 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
    if(c >= 65 && c <= 90)
	{
		return(c + 32);
	}
	return (c);
}
#include <stdio.h>
#include <ctype.h>

int main() {
    int ch = '1';
    printf("Original character: %c\n", ch);
    printf("Uppercase character: %c\n",ft_tolower(ch));
    
    return 0;
}