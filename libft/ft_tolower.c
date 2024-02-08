/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:24:11 by paulmart          #+#    #+#             */
/*   Updated: 2023/12/07 17:19:01 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c);

int	ft_tolower(int c)
{
	if ((c >= 'A' && c <= 'Z'))
		c += 32;
	return (c);
}

/* int main(void)
{
    char c = '?';
    char d = '\0';

    printf("%c\n",d);
    printf("%c\n",c);
    c = ft_tolower(c);
    d = tolower(d);
    printf("%c\n",d);
    printf("%c\n",c);
    return(0);
} */