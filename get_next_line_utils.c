/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:19:29 by mel-kouc          #+#    #+#             */
/*   Updated: 2022/11/23 18:36:14 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t len)
{
	size_t	i;
	size_t	size;

	i = 0;
	size = ft_strlen(src);
	if (len == 0)
		return (size);
	while (src[i] && i < len - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (size);
}

char	*ft_strjoin(char *data, char *buffer)
{
	char	*new_data;
	size_t	s1;
	size_t	s2;

	s1 = ft_strlen(data);
	s2 = ft_strlen(buffer);
	new_data = malloc((s1 + s2 + 1) * sizeof(char));
	if (!new_data)
		return (NULL);
	ft_strlcpy(new_data, data, s1 + 1);
	ft_strlcpy(new_data + s1, buffer, s2 + 1);
	free(data);
	return (new_data);
}

char	*ft_getline(char	*str)
{
	int		i;
	int		j;
	char	*rangeln;

	j = 0;
	i = ft_strchr(str, '\n');
	if (i == -1)
		return (str);
	else
	{
		rangeln = malloc(sizeof(char) * (i + 2));
		if (!rangeln)
			return (NULL);
		while (str[j] && j <= i)
		{
			rangeln[j] = str[j];
			j++;
		}
		rangeln[j] = '\0';
	}
	return (rangeln);
}

char	*ft_nextstr(char *s)
{
	char	*newstr;
	int		len;
	int		i;

	len = 0;
	i = ft_strchr(s, '\n');
	if (i == -1)
		return (NULL);
	else
	{
		newstr = malloc(sizeof(char) * (ft_strlen(s) - i + 1));
		if (!newstr)
			return (NULL);
		i++;
		while (s[i])
			newstr[len++] = s[i++];
		newstr[len] = '\0';
		free(s);
	}
	return (newstr);
}
