/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:53:01 by atahtouh          #+#    #+#             */
/*   Updated: 2023/11/04 11:03:46 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi (char *str)
{
	int i;
	int reslt;
	int sing;
	sing = 1;
	reslt = 0;
	i = 0;
	while(str[i] == 32 && str[i] != '\0')
			i++;
	if(str[i] == 43 || str[i] == 45)
	{
		if(str[i] == 45)
		{
			sing = -sing;
		}
	i++;
	}
	while(str[i] > 48 && str[i] < 57)
	{
		reslt = reslt * 10 + str[i] - '0';
		i++;
	}
	return (reslt * sing);
}
#include <stdio.h>
#include <stdlib.h>

int main() {
 char *str = "  +123 45";

	printf("Converted int: %d\n", ft_atoi(str));
	return 0;
}