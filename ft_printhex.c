/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 23:45:48 by bgenie            #+#    #+#             */
/*   Updated: 2022/04/22 22:32:06 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_printhex(char *hex, int cap, int padding)
{
	int		i;
	size_t	size;

	i = 0;
	size = ft_strlen(hex);
	while (hex[i])
		i++;
	while (padding--)
	{
		write(1, "0", 1);
		size++;
	}
	while (--i >= 0)
	{
		if (cap == 1)
			hex[i] = ft_toupper(hex[i]);
		write(1, &hex[i], 1);
	}
	free(hex);
	return (size);
}
