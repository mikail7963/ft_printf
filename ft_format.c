/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikkayma <mikkayma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:39:05 by mikkayma          #+#    #+#             */
/*   Updated: 2024/11/04 16:06:20 by mikkayma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(const char format, va_list args)
{
	int	caunt;

	caunt = 0;
	if (format == 'c' || format == 's')
	{
		caunt += ft_char_format(format, args);
	}
	if (format == 'd' || format == 'i' || format == 'u')
	{
		caunt += ft_decimal_format(format, args);
	}
	if (format == 'x' || format == 'X' || format == 'p')
	{
		caunt += ft_hexadecimal_format(format, args);
	}
	if (format == '%')
	{
		caunt++;
		write(1, "%", 1);
	}
	return (caunt);
}
