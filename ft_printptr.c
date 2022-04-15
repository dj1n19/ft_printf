/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 22:44:05 by bgenie            #+#    #+#             */
/*   Updated: 2022/04/15 14:28:47 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_printptr(void *ptr)
{
	unsigned long	addr;
	char			*hex;
	char			*hex_start;
	size_t			size;

	addr = (unsigned long) ptr;
	hex = ft_ultohex(addr);
	hex_start = hex;
	write(1, "0x", 2);
	while (*(hex + 1))
		hex++;
	while (hex >= hex_start)
		ft_putchar_fd(*hex--, 1);
	size = ft_strlen(hex_start) + 2;
	free(hex_start);
	return (size);
}
