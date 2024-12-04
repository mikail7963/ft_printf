/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikkayma <mikkayma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:37:52 by mikkayma          #+#    #+#             */
/*   Updated: 2024/10/30 10:37:52 by mikkayma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_format(const char format, va_list args);
int		ft_printf(const char *format, ...);
int		ft_decimal_format(const char format, va_list args);
int		ft_hexadecimal_format(const char format, va_list args);
int		ft_char_format(const char format, va_list args);

#endif
