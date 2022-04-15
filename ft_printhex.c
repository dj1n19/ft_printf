/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 23:45:48 by bgenie            #+#    #+#             */
/*   Updated: 2022/04/16 01:08:11 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_printhex(char *hex, int upper)
{
	int	i;

	i = 0;
	while (hex[i])
		i++;
	while (i >= 0)
	{
		if (upper == 1)
			hex[i] = ft_toupper(hex[i]);
		write(1, &hex[i--], 1);
	}
	return (ft_strlen(hex));
}
