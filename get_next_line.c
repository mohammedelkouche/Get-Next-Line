/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:19:32 by mel-kouc          #+#    #+#             */
/*   Updated: 2022/11/18 19:38:05 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*getline(int fd)
{
	char	*buffer;

	if(fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
}

char	*get_next_line(int fd)
{
	static int	atorage;
	char		*line;

	line = getline(fd);
}

