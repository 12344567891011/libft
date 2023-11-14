/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 20:52:59 by atahtouh          #+#    #+#             */
/*   Updated: 2023/11/14 16:08:01 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*p1;
	const char	*p2;
	size_t		i;

	p1 = s1;
	p2 = s2;
	i = 0;
	while (p1[i] != '\0' && p2[i] != '\0' && i < n)
	{
		if (p1[i] == p2[i])
		{
			break ;
		}
		i++;
	}
	return (p1[i] - p2[i]);
}
