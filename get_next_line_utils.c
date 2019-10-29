/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smaniani <smaniani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 15:51:33 by smaniani          #+#    #+#             */
/*   Updated: 2019/10/28 16:18:44 by smaniani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t						ft_strlen(const char *s)
{
	size_t					n;

	n = 0;
	while (*s++)
		n++;
	return (n);
}

char						*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (unsigned char)c)
			return ((char*)s);
		s++;
	}
	if (*s == (unsigned char)c)
		return ((char*)s);
	return (0);
}

char						*ft_strjoin(char const *s1, char const *s2)
{
	size_t					len_s1;
	char					*res;
	int						i;

	if (!(s1 && s2))
		return (NULL);
	len_s1 = ft_strlen(s1);
	i = 0;
	res = (char*)malloc(len_s1 + ft_strlen(s2) + 1);
	if (!res)
		return (NULL);
	else
	{
		while (*s1)
		{
			res[i] = *s1++;
			i++;
		}
		while (*s2)
			res[len_s1++] = *s2++;
		res[len_s1] = '\0';
	}
	return (res);
}

char						*ft_strcpy(char *dest, char *src)
{
	int						i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void						*ft_calloc(size_t count, size_t size)
{
	unsigned char			*ptr;
	int						len;
	int						i;

	len = count * size;
	i = 0;
	if (!(ptr = (unsigned char*)malloc(size * count)))
		return (NULL);
	while (i < len)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
