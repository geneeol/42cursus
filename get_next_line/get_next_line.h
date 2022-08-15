/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dahkang <dahkang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 16:20:53 by dahkang           #+#    #+#             */
/*   Updated: 2022/08/15 16:51:44 by dahkang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

# define OPEN_FD_MAX 49152

typedef struct s_line
{
	char	*str;
	size_t	len;
}	t_line;

char	*get_next_line(int fd);
ssize_t	gnl_get_idx(char *str, char ch);
char	*gnl_strdup(const char *str);
char	*gnl_strjoin(t_line *line, char *buf);
size_t	gnl_strlen(const char *str);
char	*gnl_substr(t_line *line, size_t start, size_t len);

#endif
