/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultohex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 22:52:05 by bgenie            #+#    #+#             */
/*   Updated: 2022/04/15 00:56:57 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_ultohex(unsigned long nbr)
{
	char	*hex;
	size_t	size;

	size = 16;
	hex = malloc(sizeof(char) * 17);
	if (!hex)
		return (NULL);
	hex[size--] = 0;
	while (nbr != 0)
	{
		if (nbr % 16 > 9)
			hex[size--] = nbr % 16 + 87;
		else
			hex [size--] = nbr % 16 + 48;
		nbr /= 16;
	}
	while (size > 0)
		hex[size--] = 48;
	hex[size] = 48;
	return (hex);
}
