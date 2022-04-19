/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printudec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgenie <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 18:54:48 by bgenie            #+#    #+#             */
/*   Updated: 2022/04/19 15:47:50 by bgenie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

size_t	ft_printudec(unsigned int nbr)
{
	char	*anbr;
	size_t	size;

	anbr = ft_utoa(nbr);
	ft_putstr_fd(anbr, 1);
	size = ft_strlen(anbr);
	free(anbr);
	return (size);
}
