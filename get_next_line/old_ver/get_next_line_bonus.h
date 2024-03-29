/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dahkang <dahkang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 16:20:53 by dahkang           #+#    #+#             */
/*   Updated: 2022/08/14 23:23:40 by dahkang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>

# define OPEN_FD_MAX 49152

typedef struct s_line
{
	char	*str;
	size_t	len;
}	t_line;

char	*get_next_line(int fd);
char	*gnl_strchr(const char *str, int ch);
char	*gnl_strdup(const char *str);
char	*gnl_strjoin(t_line *line, char *buf);
size_t	gnl_strlen(const char *str);
char	*gnl_substr(t_line *line, size_t start, size_t len);

#endif
