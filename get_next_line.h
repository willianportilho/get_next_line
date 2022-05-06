/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wportilh <wportilh@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 20:39:02 by wportilh          #+#    #+#             */
/*   Updated: 2022/05/06 19:30:38 by wportilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*cut_act(char *actual);
char	*line_to_send(char *actual);
char	*ft_strjoin_alt(char *s1, char *s2);
int		check_break(char *actual);
size_t	ft_strlen(char *s);

#endif