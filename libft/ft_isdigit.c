/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:22:07 by paulmart          #+#    #+#             */
/*   Updated: 2023/12/06 18:28:12 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c);

int	ft_isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (2048);
	else
		return (0);
}
/* int main(void)
{
    int c = '1';
    
    printf("%d", ft_isdigit(c));
    printf("%d", isdigit(c));
    return 0;
} */