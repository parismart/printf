/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmarti <parmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 08:40:57 by parmarti          #+#    #+#             */
/*   Updated: 2020/07/20 09:39:30 by parmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

t_data	*print_char(t_data *data)
{
	char	c;

	c = (char)va_arg(data->args, int);
	if (data->minus == 0)
	{
		if (data->zero == 0)
			print_flags(data, ' ', data->width - 1);
		else
			print_flags(data, '0', data->width - 1);
	}
	ft_putchar_fd(c, 1);
	data->length++;
	if (data->minus == 1)
		print_flags(data, ' ', data->width - 1);
	return (data);
}
