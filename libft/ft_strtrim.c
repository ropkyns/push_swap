/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:45:11 by paulmart          #+#    #+#             */
/*   Updated: 2023/12/07 17:19:31 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set);

int	ft_check(char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s, char const *set)
{
	int		start;
	int		end;
	char	*trim;
	int		i;

	start = 0;
	while (ft_check((char *)set, (char)s[start]) != 0 && (char)s[start])
		start++;
	end = ft_strlen((char *)s) - 1;
	while (ft_check((char *)set, (char)s[end]) != 0 && end > 0)
		end--;
	if (end == 0)
		trim = malloc(sizeof(char) * 1);
	else
		trim = malloc(sizeof(char) * ((end - start) + 2));
	if (!trim)
		return (NULL);
	i = 0;
	while (start <= end)
		trim[i++] = (char)s[start++];
	trim[i] = '\0';
	return (trim);
}

/* int main(void)
{
    char * c = "";
    char * set = "abc";

    printf("string : %s.\n", c);
    printf("set : %s.\n", set);
    printf("trimmed : %s.\n", ft_strtrim(c, set));
    return(0);
} */