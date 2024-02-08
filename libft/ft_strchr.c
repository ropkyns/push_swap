/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:37:50 by paulmart          #+#    #+#             */
/*   Updated: 2023/12/07 17:03:40 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr( const char *s, int c);

char	*ft_strchr( const char *s, int c)
{
	char	*dup;
	size_t	i;

	dup = (char *)s;
	i = 0;
	while (i < ft_strlen(dup) + 1)
	{
		if (*(dup + i) == (char)c)
			return (dup + i);
		i++;
	}
	return (NULL);
}

/* int main(void)
{
    char * str = "Ceci n'est pas un test.";
    char clem = 'z';

    printf("str:%s\n",str);
    printf("on cherche: %c\n",clem);
    printf("on trouve: %s\n",ft_strchr(str, clem));
    str = "Ceci n'est pas un test.";
    printf("str:%s\n",str);
    printf("on cherche: %c\n",clem);
    printf("on trouve: %s\n",strchr(str, clem));
    return(0);
} */