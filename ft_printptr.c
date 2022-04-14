/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 22:44:05 by bgenie            #+#    #+#             */
/*   Updated: 2022/04/15 00:57:16 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_printptr(void *ptr)
{
	unsigned long	addr;
	char			*hex;
	size_t			size;

	addr = (unsigned long) ptr;
	hex = ft_ultohex(addr);
	write(1, "0x", 2);
	ft_putstr_fd(hex, 1);
	size = ft_strlen(hex + 2);
	free(hex);
	return (size);
}
