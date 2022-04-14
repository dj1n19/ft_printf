/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 23:48:01 by bgenie            #+#    #+#             */
/*   Updated: 2022/04/15 00:24:39 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_printdec(int nbr)
{
	char	*anbr;

	anbr = ft_itoa(nbr);
	ft_putstr_fd(anbr, 1);
	return (ft_strlen(anbr));
}
