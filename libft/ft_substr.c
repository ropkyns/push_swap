/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 14:42:25 by paulmart          #+#    #+#             */
/*   Updated: 2023/12/06 18:57:43 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*sub;
	size_t		i;
	size_t		slen;

	slen = ft_strlen(s);
	if (start > slen)
		len = 0;
	else if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	sub = malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	i = 0;
	while (start + i < slen && i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

/* int main(void)
{
	char * s = "Ceci est un test";
	printf("%lu\n", strlen(s));
	printf("%s\n%s", s, ft_substr(s, 12, 4));
	return(0);
} */