/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal_format.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikkayma <mikkayma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:06:41 by mikkayma          #+#    #+#             */
/*   Updated: 2024/11/04 16:15:23 by mikkayma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_unsigned_decimal_format(unsigned int value)
{
	char			s[32];
	int				len;
	unsigned int	tmp;

	tmp = value;
	len = 0;
	while (tmp > 0 && len++ >= 0)
		tmp /= 10;
	tmp = len;
	while (len > 0 && value != 0)
	{
		s[len - 1] = (value % 10) + '0';
		value /= 10;
		len--;
	}
	write(1, s, tmp);
	return (tmp);
}

static int	ft_decimal(int value)
{
	int	caunt;

	caunt = 0;
	if (value == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (value < 0)
	{
		value *= -1;
		write(1, "-", 1);
		caunt = 1;
		caunt += ft_unsigned_decimal_format(value);
	}
	else
		caunt = ft_unsigned_decimal_format(value);
	return (caunt);
}

int	ft_decimal_format(const char format, va_list args)
{
	int		num;
	int		len;

	if (format == 'd' || format == 'i')
	{
		num = va_arg(args, int);
		len = ft_decimal(num);
	}
	if (format == 'u')
	{
		num = va_arg(args, unsigned int);
		if (num == 0)
		{
			write(1, "0", 1);
			return (1);
		}
		len = ft_unsigned_decimal_format(num);
	}
	return (len);
}
