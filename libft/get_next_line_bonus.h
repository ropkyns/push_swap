/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 16:06:13 by paulmart          #+#    #+#             */
/*   Updated: 2023/12/18 17:22:48 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, char const *s2);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *s);
int		ft_strchr( const char *s, int c);
char	*del_for_next_line(char *stock);
char	*putline(char *stock);
char	*get_line(int fd, char *stock);
void	*ft_memcpy(void *dest, const void *src, size_t n);

#endif