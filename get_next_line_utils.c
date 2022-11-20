/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:19:29 by mel-kouc          #+#    #+#             */
/*   Updated: 2022/11/20 19:52:51 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char *prdata, char *buff)
{
	char	*sjoin;
	size_t	len;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!prdata || !buff)
		return (0);
	len = ft_strlen(prdata) + ft_strlen(buff);
	sjoin = (char *)malloc(sizeof(char) * (len + 1));
	if (!sjoin)
		return (NULL);
	while (i < ft_strlen(prdata))
	{
		sjoin[i] = prdata[i];
		i++;
	}
	while (j < ft_strlen(buff))
		sjoin[i++] = buff[j++];
	sjoin[i] = '\0';
	free(prdata);
	return (sjoin);
}

char	*ft_getline(char	*str)
{
	int		i;
	int		j;
	char	*rangeln;

	j = 0;
	i = ft_strchr(str, '\n');
	rangeln = malloc(sizeof(char) * (i + 2));
	if (!rangeln)
		return (NULL);
	while (str[j] && j <= i)
	{
		rangeln[j] = str[j];
		j++;
	}
	rangeln[j] = '\0';
	return (rangeln);
}

char	*ft_nextstr(char *s)
{
	char	*newstr;
	int		len;
	int		i;

	len = 0;
	i = ft_strchr(s, '\n');
	newstr = malloc(sizeof(char) * (ft_strlen(s) - i + 1));
	if (!newstr)
		return (NULL);
	i++;
	while (s[i])
		newstr[len++] = s[i++];
	newstr[len] = '\0';
	free(s);
	return (newstr);
}
