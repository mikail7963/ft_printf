/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_format.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikkayma <mikkayma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:59:06 by mikkayma          #+#    #+#             */
/*   Updated: 2024/11/04 11:09:29 by mikkayma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_char_format(const char format, va_list args)
{
	char	c;
	char	*s;
	int		caunt;

	caunt = 0;
	if (format == 'c')
	{
		c = (char)va_arg(args, int);
		caunt++;
		write(1, &c, 1);
	}
	if (format == 's')
	{
		s = va_arg(args, char *);
		if (!s)
		{
			write(1, "(null)", 6);
			return (6);
		}
		while (s[caunt])
			caunt++;
		write(1, s, caunt);
	}
	return (caunt);
}
