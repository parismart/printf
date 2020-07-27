/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_percent.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmarti <parmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 13:14:45 by parmarti          #+#    #+#             */
/*   Updated: 2020/07/20 19:02:12 by parmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

t_data	*print_percent(t_data *data)
{
	if (data->zero == 1 && \
		(data->precision == -1 || data->precision < data->width))
		data->precision = data->width;
	if (data->minus == 0)
	{
		if (data->zero == 1)
			print_flags(data, '0', data->precision - 1);
		if (data->zero == 0)
			print_flags(data, ' ', data->width - 1);
	}
	data->length++;
	ft_putchar_fd('%', 1);
	if (data->minus == 1)
		print_flags(data, ' ', data->width - 1);
	return (data);
}
