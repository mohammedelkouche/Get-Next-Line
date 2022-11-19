/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:19:29 by mel-kouc          #+#    #+#             */
/*   Updated: 2022/11/19 22:42:28 by mel-kouc         ###   ########.fr       */
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
