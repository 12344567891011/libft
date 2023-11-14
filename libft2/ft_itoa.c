/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 14:29:18 by atahtouh          #+#    #+#             */
/*   Updated: 2023/11/13 08:39:17 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_len(int n)
{
	int i;
	i = 0;
	if (n < 0)
		i++;
	while(n != 0)
	{
		n = n / 10;
		i++;
	}
	return(i);
}
char	*ft_itoa(int n)
{
	int k;
	k = ft_len(n);
	char *ptr;
	ptr = (char *)malloc((k + 1) * sizeof(char));
	if(ptr == NULL)
	return (NULL);
	if (n == -2147483648)
	return ("-2147483648");
	ptr[k] = '\0';
	if(n < 0)
	{
	ptr[0] = '-';
	n = n * -1;
	}
	while(n != 0)
	{
		k--;
		ptr[k] = (n % 10) + '0';
		n = n / 10;
	}
	return (ptr);
}

int main(void)
{
	printf("%s",ft_itoa(2147483647));
}