/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 20:33:59 by atahtouh          #+#    #+#             */
/*   Updated: 2023/11/02 21:12:04 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *ptr = b;
	size_t i;
	i = 0;
	while(i < len)
	{
		ptr[i] = c;
		i++;
	}
	return b;
}
void	ft_bzero(void *s, size_t n)
{
	ft_memet(s,'0',n);
	return s;
}