/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikkayma <mikkayma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:37:08 by mikkayma          #+#    #+#             */
/*   Updated: 2024/10/30 10:37:08 by mikkayma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		caunt;

	caunt = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			caunt += ft_format(*format, args);
		}
		else
		{
			caunt++;
			write(1, format, 1);
		}
		format++;
	}
	va_end(args);
	return (caunt);
}
