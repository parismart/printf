/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmarti <parmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 12:25:26 by parmarti          #+#    #+#             */
/*   Updated: 2020/07/21 20:07:56 by parmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static void	put_unsigned(unsigned int n)
{
	if (n > 9)
		put_unsigned(n / 10);
	ft_putchar_fd((n % 10) + 48, 1);
}

static void	put_flags(t_data *data, size_t len)
{
	if (data->zero == 1 && data->precision == -1)
		data->precision = data->width;
	if (data->minus == 0)
	{
		if (len < data->precision && data->precision > 0)
			print_flags(data, ' ', data->width - data->precision);
		else
			print_flags(data, ' ', data->width - len);
	}
	if (data->zero == 1 || data->precision > 0)
		print_flags(data, '0', data->precision - len);
}

t_data		*print_unsigned(t_data *data)
{
	unsigned int	nbr;
	size_t			len;

	nbr = (unsigned int)va_arg(data->args, unsigned int);
	len = ft_nbrlen(nbr);
	if (nbr == 0 && data->precision == 0)
	{
		print_flags(data, ' ', data->width);
		return (data);
	}
	put_flags(data, len);
	data->length = data->length + len;
	put_unsigned(nbr);
	if (data->minus == 1)
	{
		if (len < data->precision && data->precision > 0)
			print_flags(data, ' ', data->width - data->precision);
		else
			print_flags(data, ' ', data->width - len);
	}
	return (data);
}
