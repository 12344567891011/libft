/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memet.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 20:09:42 by atahtouh          #+#    #+#             */
/*   Updated: 2023/11/02 20:30:34 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *ptr = b;
	size_t i;
	i = 0;
	while(i <= len)
	{
		ptr[i] = c;
		i++;
	}
	return b;
}
int main() {
    char str[5];
    ft_memset(str, 'A', sizeof(str));
    printf("str : %s\n", str);
    return 0;
}