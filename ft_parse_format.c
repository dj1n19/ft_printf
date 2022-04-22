/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 23:16:11 by bgenie            #+#    #+#             */
/*   Updated: 2022/04/22 21:41:18 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_parse_format(char c, va_list ap)
{
	size_t	count;
	int		upper;

	upper = 0;
	count = 0;
	if (c == 'c')
		count += (ft_printchar(va_arg(ap, int)));
	else if (c == 's')
		count += (ft_printstr(va_arg(ap, char *)));
	else if (c == 'p')
		count += (ft_printptr(va_arg(ap, void *)));
	else if (c == 'd' || c == 'i')
		count += (ft_printdec(va_arg(ap, int)));
	else if (c == 'u')
		count += (ft_printudec(va_arg(ap, unsigned int)));
	else if (c == 'x' || c == 'X')
	{
		if (c == 'X')
			upper = 1;
		count += (ft_printhex(ft_utohex(va_arg(ap, unsigned long int)), upper, 0));
	}
	else if (c == '%')
		count += (ft_printchar('%'));
	va_end(ap);
	return (count);
}
