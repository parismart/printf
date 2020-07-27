/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmarti <parmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 10:27:00 by parmarti          #+#    #+#             */
/*   Updated: 2020/07/22 18:52:22 by parmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static void	print_nbr(t_data *data, long int nbr, int len, int precision)
{
	int	zeros;

	zeros = len;
	if (nbr < 0 && precision > 0)
		zeros--;
	if (data->precision >= len)
	{
		len = data->precision;
		if (nbr < 0)
			len++;
	}
	if (nbr < 0)
		nbr = -nbr;
	ft_putnbr_fd(nbr, 1);
	if (data->minus == 1)
	{
		if (precision == -1)
			print_flags(data, ' ', data->width - zeros);
		else
			print_flags(data, ' ', data->width - len);
	}
}

static void	print_precision(t_data *data, long int nbr, int len, int precision)
{
	int	zeros;
	int	length;

	zeros = len;
	length = len;
	if (nbr < 0 && precision > 0)
		zeros--;
	if (data->zero == 1 && precision == -1)
		data->precision = data->width;
	if (data->precision >= length)
	{
		len = data->precision;
		if (nbr < 0)
			len++;
	}
	if (data->minus == 0)
		print_flags(data, ' ', data->width - len);
	if (nbr < 0)
		ft_putchar_fd('-', 1);
	if (data->minus == 0 || precision >= length)
		print_flags(data, '0', data->precision - zeros);
}

t_data		*print_int(t_data *data)
{
	long int	nbr;
	int			len;
	int			precision;

	precision = data->precision;
	nbr = va_arg(data->args, int);
	len = ft_nbrlen(nbr);
	if (nbr == 0 && data->precision == 0)
	{
		print_flags(data, ' ', data->width);
		return (data);
	}
	print_precision(data, nbr, len, precision);
	print_nbr(data, nbr, len, precision);
	data->length = data->length + len;
	return (data);
}
