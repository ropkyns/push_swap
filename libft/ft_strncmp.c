/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:09:35 by paulmart          #+#    #+#             */
/*   Updated: 2023/12/07 17:23:24 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *first, const char *second, int len);

int	ft_strncmp(const char *first, const char *second, int len)
{
	char	*f;
	char	*s;
	int		i;

	f = (char *)first;
	s = (char *)second;
	i = 0;
	while ((f[i] == s[i]) && f[i] != '\0' && len != 0)
	{
		len--;
		i++;
	}
	if (len == 0)
		return (0);
	return ((unsigned char)f[i] - (unsigned char)s[i]);
}

/* int main(void)
{
    char * chou = "clem";
    char * quette = "ence";

    printf("%d", ft_strncmp(chou, quette, 3));
    return(0);
} */