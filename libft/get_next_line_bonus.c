/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 15:58:56 by paulmart          #+#    #+#             */
/*   Updated: 2023/12/18 17:21:32 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd);

char	*get_line(int fd, char *stock)
{
	char	*buf;
	int		nb_line;

	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	nb_line = 1;
	while (ft_strchr(stock, '\n') == 0 && nb_line != 0)
	{
		nb_line = read(fd, buf, BUFFER_SIZE);
		if (nb_line == -1)
		{
			free(buf);
			free(stock);
			return (NULL);
		}
		buf[nb_line] = '\0';
		if (!stock)
			stock = ft_strdup(buf);
		else
			stock = ft_strjoin(stock, buf);
	}
	free(buf);
	return (stock);
}

char	*putline(char *stock)
{
	int			len_line;
	char		*next_line;

	len_line = 0;
	if (!(*stock))
		return (NULL);
	while (stock[len_line] != '\n' && stock[len_line])
		len_line++;
	next_line = malloc(sizeof(char) * (len_line + 2));
	if (!next_line)
		return (NULL);
	len_line = 0;
	while (stock[len_line] != '\n' && stock[len_line])
	{
		next_line[len_line] = stock[len_line];
		len_line++;
	}
	if (stock[len_line] == '\n')
	{
		next_line[len_line] = stock[len_line];
		len_line++;
	}
	next_line[len_line] = '\0';
	return (next_line);
}

char	*del_for_next_line(char *stock)
{
	char	*tmp;
	size_t	i;
	size_t	j;

	i = 0;
	while (stock[i] != '\0' && stock[i] != '\n')
		i++;
	if (!stock[i])
	{
		free(stock);
		return (NULL);
	}
	i++;
	tmp = malloc(sizeof(char) * (ft_strlen(stock) - i + 1));
	if (!tmp)
		return (NULL);
	j = 0;
	while (stock[i])
		tmp[j++] = stock[i++];
	tmp[j] = '\0';
	free(stock);
	return (tmp);
}

char	*get_next_line(int fd)
{
	static char	*stock[1024];
	char		*next_line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	stock[fd] = get_line(fd, stock[fd]);
	if (!stock[fd])
		return (NULL);
	next_line = putline(stock[fd]);
	stock[fd] = del_for_next_line(stock[fd]);
	return (next_line);
}
