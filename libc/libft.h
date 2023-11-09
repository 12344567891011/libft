/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atahtouh <atahtouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:15:02 by atahtouh          #+#    #+#             */
/*   Updated: 2023/11/07 10:28:08 by atahtouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef LIBFT_H
#define LIBFT_H

int ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 121))
	return(1);
	else
	return(0);
}

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
	return(1);
	else
	return(0);
}

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 121) || (c >= 48 && c <= 57))
	return(1);
	else
	return(0);
}
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	return(1);
	else
	return(0);
}
int	ft_isprint(int c)
{
	if (c >= 132 && c <= 126)
	return(1);
	else
	return(0);
}

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

void	ft_bzero(void *s, size_t n)
{
	ft_memet(s,'0',n);
	return s;
}

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	const unsigned char *ps = src;
	unsigned char *pd = dst;
	size_t i = 0;

	while (i < n)
	{
		pd[i] = ps[i];
		i++;
	}

	return dst;
}

void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *d = dst;
    const unsigned char *s = src;
    int i;
    if (d < s)
    {
        i = 0;
    while(i < len)
    {
        d[i] = s[i];
        i++;
    }
    }
    else
    {
        i = len;
        while (i > 0)
        {
            d[i - 1] = s[i - 1];
            i--;
        }
    }
    return dst;
    
}

size_t  ft_strlcpy(char *dst,char *src, size_t dstsize)
{
	size_t i;
	i = 0;
	while(src[i] != '\0' && i < dstsize)
	{
		dst[i] = src[i];
		i++;
	} 
	dst[i] = '\0';
	return (ft_strlen(src));
}
size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t i;
	i = 0;
	while(src[i] != '\0')
	{
		dst[dstsize + i] = src[i];
		i++;
	}
	return(ft_strlen(dst) + ft_strlen(src));
}
int	ft_toupper(int c)
{
	if(c >= 97 && c <= 122)
	{
		return(c - 32);
	}
	return (c);
}

int	ft_tolower(int c)
{
    if(c >= 65 && c <= 90)
	{
		return(c + 32);
	}
	return (c);
}
char	*ft_strchr(const char *s, int c)
{
	while(*s != '\0')
	{
		if(*s == c)
		break;
		s++;	
	}
	return((char *)s);
}

char	*strrchr(const char *s, int c)
{
	int t;
	int i;
	i = 0;
	while(s[i] != '\0')
	{
		if(s[i] == c)
		{
		t = i;
		}
		i++;	
	}
	return((char *)s+t);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;
	i = 0;
	while(s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
		break;
		i++;
	}
	if (i == n)
	{
        return 0;
	}
	return(s1[i] - s2[i]);
}

void	*ft_memchr(const void *s, int c, size_t n)
{
    const char *p = s;
    size_t i;
	i = 0;
	while(p[i] != '\0' && i < n)
	{
		if(p[i] == c)
		{
		break;
		}
		i++;	
	}
	return((char *)s + i);
}

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char *p1 = s1;
	const char *p2 = s2;
	size_t i;
	i = 0;
	while(p1[i] != '\0' && p2[i] != '\0' && i < n)
	{
		if(p1[i] == p2[i])
		{
			break;
		}
		i++;
	}
	return (p1[i] - p2[i]);
	
}

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	i = 0;
	
	while(haystack[i] != '\0' && i < len)
	{
	   j = 0;
		while(needle[j] != '\0')
		{
			if(needle[j] != haystack[i + j])
			break;
		j++;
		}
		if(needle[j] == '\0')
		return((char *)(haystack + i));
		i++;
	}
	return (NULL);
}

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