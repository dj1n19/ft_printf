/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultohex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 22:52:05 by bgenie            #+#    #+#             */
/*   Updated: 2022/04/15 14:24:17 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_ultohex(unsigned long nbr)
{
	char	*hex;
	int		i;

	i = 0;
	hex = malloc(sizeof(char) * 17);
	if (!hex)
		return (NULL);
	while (nbr != 0)
	{
		if (nbr % 16 > 9)
			hex[i++] = nbr % 16 + 87;
		else
			hex [i++] = nbr % 16 + 48;
		nbr /= 16;
	}
	hex[i] = 0;
	return (hex);
}
