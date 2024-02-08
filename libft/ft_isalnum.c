/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:36:29 by paulmart          #+#    #+#             */
/*   Updated: 2023/12/06 18:14:45 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c);

int	ft_isalnum(int c)
{
	if (((c >= '0') && (c <= '9'))
		|| ((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (2048);
	else
		return (0);
}

/* int main(void)
{
    int c = 'r';

    printf("%d", ft_isalnum(c));
    printf("%d", ft_isalnum(c));
    return 0;
} */