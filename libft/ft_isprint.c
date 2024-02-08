/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:01:53 by paulmart          #+#    #+#             */
/*   Updated: 2023/12/06 18:28:23 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c);

int	ft_isprint(int c)
{
	if ((c >= 32) && (c <= 126))
		return (16348);
	else
		return (0);
}

/* int main(void)
{
    int c = 23;
    
    printf("%d", ft_isprint(c));
    printf("%d", isprint(c));
    return 0;
} */