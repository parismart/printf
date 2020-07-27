/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmarti <parmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 08:16:52 by parmarti          #+#    #+#             */
/*   Updated: 2020/07/22 19:07:25 by parmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

t_data	*check_flags(t_data *data)
{
	while (data->format[data->i] == '-' || data->format[data->i] == '*' \
			|| data->format[data->i] == '0')
	{
		if (data->format[data->i] == '-' && data->i++)
			data->minus = 1;
		else if (data->format[data->i] == '0' && data->i++)
			data->zero = 1;
		else if (data->format[data->i] == '*' && data->i++)
			data->asterisk = 1;
	}
	return (data);
}

t_data	*check_width(t_data *data)
{
	int	width;

	if (data->asterisk == 1)
	{
		data->width = va_arg(data->args, int);
		if (data->width < 0)
		{
			data->minus = 1;
			data->width = -data->width;
		}
		return (data);
	}
	width = ft_isdigit(data->format[data->i]);
	while (width)
	{
		data->width = data->width * 10;
		data->width = data->width + data->format[data->i] - 48;
		if (data->i == (int)ft_strlen(data->format) - 1)
			break ;
		data->i++;
		width = ft_isdigit(data->format[data->i]);
	}
	return (data);
}

t_data	*check_precision(t_data *data)
{
	int	precision;

	if (data->format[data->i] == '.')
	{
		data->precision = 0;
		data->i++;
		if (data->format[data->i] == '*')
		{
			data->precision = va_arg(data->args, int);
			if (data->precision < 0)
				data->precision = -1;
			data->i++;
			return (data);
		}
		precision = ft_isdigit(data->format[data->i]);
		while (precision)
		{
			data->precision = data->precision * 10;
			data->precision = data->precision + data->format[data->i] - 48;
			data->i++;
			precision = ft_isdigit(data->format[data->i]);
		}
	}
	return (data);
}

void	check_specifier(t_data *data)
{
	if (data->format[data->i] == 'c')
		print_char(data);
	else if (data->format[data->i] == 's')
		print_string(data);
	else if (data->format[data->i] == 'p')
		print_pointer(data);
	else if ((data->format[data->i] == 'd') || (data->format[data->i] == 'i'))
		print_int(data);
	else if (data->format[data->i] == 'u')
		print_unsigned(data);
	else if (data->format[data->i] == 'x')
		print_hex(data, 'x');
	else if (data->format[data->i] == 'X')
		print_hex(data, 'X');
	else if (data->format[data->i] == '%')
		print_percent(data);
	else
		print_width(data);
}
