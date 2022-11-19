/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kouc <mel-kouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:19:39 by mel-kouc          #+#    #+#             */
/*   Updated: 2022/11/19 22:51:21 by mel-kouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10  
# endif

char	*get_next_line(int fd);
char	*ft_getstore(int fd, char *stor);
int		ft_strchr(char *s, char c);
char	*ft_strjoin(char *prdata, char *buff);
size_t	ft_strlen(const char *s);


#endif
