/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printudec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 18:54:48 by bgenie            #+#    #+#             */
/*   Updated: 2022/04/15 18:57:12 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_printudec(unsigned long nbr)
{
	char	*anbr;
	size_t	size;

	anbr = ft_itoa(nbr);
	size = ft_strlen(anbr);
	return (size);
}
