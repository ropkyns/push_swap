/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:26:15 by palu              #+#    #+#             */
/*   Updated: 2024/03/14 14:16:06 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_words(char *str, char separator)
{
	int		i;
	int		count;
	int		sep;

	count = 0;
	i = 0;
	while (str[i])
	{
		sep = 1;
		while (str[i] == separator && str[i])
			i++;
		while (str[i] != separator && str[i])
		{
			if (sep == 1)
			{
				sep = 0;
				count++;
			}
			i++;
		}
	}
	return (count);
}

static char	*get_next_word(char *str, char separator)
{
	static int	index = 0;
	char		*word;
	int			i;
	int			len;

	len = 0;
	i = 0;
	while (str[index] == separator)
		index++;
	while ((str[index + len] != separator) && str[index + len])
		len++;
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	while ((str[index] != separator) && str[index])
	{
		word[i] = str[index];
		i++;
		index++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char separator)
{
	char	**new_str;
	int		cw;
	int		i;

	cw = count_words(str, separator);
	if (cw == 0)
		exit (1);
	new_str = malloc(sizeof(char *) * (cw + 2));
	if (!new_str)
		return (NULL);
	i = -1;
	while (++i <= cw)
	{
		if (i == 0)
		{
			new_str[i] = malloc(sizeof(char));
			if (!new_str[i])
				return (NULL);
			new_str[i][0] = 'a';
			i++;
		}
		new_str[i] = get_next_word(str, separator);
	}
	new_str[i] = NULL;
	return (new_str);
}
