/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmarti <parmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 13:14:34 by parmarti          #+#    #+#             */
/*   Updated: 2020/07/22 16:03:12 by parmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static void	initialize(t_data *data)
{
	data->minus = 0;
	data->zero = 0;
	data->asterisk = 0;
	data->width = 0;
	data->precision = -1;
	data->length = 0;
	data->i = 0;
}

static void	reset_flags(t_data *data)
{
	data->minus = 0;
	data->zero = 0;
	data->asterisk = 0;
	data->width = 0;
	data->precision = -1;
}

static int	check_format(t_data *data)
{
	data->i++;
	check_flags(data);
	check_width(data);
	check_precision(data);
	check_flags(data);
	check_specifier(data);
	return (data->length);
}

static int	analyzer(t_data *data)
{
	if (ft_strcmp(data->format, "%") == 0)
		return (0);
	while (data->format[data->i])
	{
		if (data->format[data->i] == '%')
		{
			reset_flags(data);
			check_format(data);
			if (!(ft_strrchr("cspiduxX%", data->format[data->i])))
			{
				ft_putchar_fd(data->format[data->i], 1);
				data->length++;
				if (data->minus == 1)
					print_flags(data, ' ', data->width - 1);
			}
		}
		else
		{
			ft_putchar_fd(data->format[data->i], 1);
			data->length++;
		}
		data->i++;
	}
	return (data->length);
}

int			ft_printf(const char *format, ...)
{
	t_data *data;

	if (!(data = malloc(sizeof(t_data))))
		return (0);
	data->format = format;
	initialize(data);
	if (format)
	{
		va_start(data->args, format);
		data->length = analyzer(data);
		va_end(data->args);
	}
	free(data);
	return (data->length);
}
