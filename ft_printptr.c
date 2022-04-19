/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 22:44:05 by bgenie            #+#    #+#             */
/*   Updated: 2022/04/19 15:45:48 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_printptr(void *ptr)
{
	unsigned long int	addr;
	unsigned int		word;	
	char				*hex;
	size_t				size;

	size = 0;
	addr = (unsigned long int) ptr;
	word = (unsigned int)(addr >> 32);
	hex = ft_utohex(word);
	write(1, "0x", 2);
	size += ft_printhex(hex, 0);
	word = (unsigned int) addr;
	hex = ft_utohex(word);
	size += ft_printhex(hex, 0);
	free(hex);
	return (size + 2);
}
