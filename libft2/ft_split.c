/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:33:47 by atahtouh          #+#    #+#             */
/*   Updated: 2023/11/13 10:12:36 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
int ft_count(char *s, char c)
{
	int i;
	int count;
	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			count++;
		}
	   i++; 
	}
	return(count);
}

char *alloc_mot(char *s)
{
	int i;
	char *ptr;
	
	i = 0;
	ptr = (char*)malloc(ft_strlen(s) * sizeof(char));
	if(ptr == NULL)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}


char **ft_split(char *s, char c)
{
	int len;
	char **ptr;
	
	len = ft_count(s,c);
	ptr = (char **)malloc((len + 1) * sizeof(char*));
	if (ptr == NULL)
	{
		return (NULL);
	}
	int i;
	int fin;
	int len_mot;
	int debut;
	char *mot;
	int mot_indice;
	len_mot = 0;
	debut = 0;
	mot_indice = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			fin = i;
			len_mot = fin - debut;
			if (len_mot > 0)
			{
				mot = alloc_mot(s + debut);
				ptr[mot_indice] = mot;
				mot_indice++;
			}
			debut = i + 1;
		}
		i++;
	}
	len_mot = i - debut;
	if (len_mot > 0)
	{
		mot = alloc_mot(s + debut);
		ptr[mot_indice] = mot;
		mot_indice++;
	}
	ptr[mot_indice] = NULL;
	return (ptr);
}

int main(void)
{
    char *s = "Hello World!@This@is a@test.";
    char **result = ft_split(s, '@');
    int i = 0;
    while (result[i] != NULL)
    {
        printf("%s\n", result[i]);
        i++;
    }
    return 0;
}