/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmarti <parmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 13:16:43 by parmarti          #+#    #+#             */
/*   Updated: 2020/07/22 10:12:05 by parmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include "libft/libft.h"

typedef struct	s_data
{
	const char	*format;
	char		*cpy;
	va_list		args;
	int			i;
	int			minus;
	int			asterisk;
	int			zero;
	int			width;
	int			precision;
	int			length;
}				t_data;

int				ft_printf(const char *format, ...);
void			print_flags(t_data *data, char c, int width);
t_data			*print_width(t_data *data);
void			check_specifier(t_data *data);
t_data			*check_width(t_data *data);
t_data			*check_precision(t_data *data);
t_data			*check_flags(t_data *data);
t_data			*print_char(t_data *data);
t_data			*print_string(t_data *data);
t_data			*print_int(t_data *data);
t_data			*print_pointer(t_data *data);
t_data			*print_unsigned(t_data *data);
t_data			*print_hex(t_data *data, char x);
t_data			*print_percent(t_data *data);

#endif
