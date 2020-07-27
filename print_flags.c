/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_flags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmarti <parmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 16:53:32 by parmarti          #+#    #+#             */
/*   Updated: 2020/07/22 16:54:33 by parmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	print_flags(t_data *data, char c, int width)
{
	if (width > 0)
	{
		data->length = data->length + width;
		while (width > 0)
		{
			ft_putchar_fd(c, 1);
			width--;
		}
	}
}

t_data	*print_width(t_data *data)
{
	if (data->minus == 0)
	{
		if (data->zero == 0)
			print_flags(data, ' ', data->width - 1);
		if (data->zero == 1)
			print_flags(data, '0', data->width - 1);
	}
	return (data);
}
