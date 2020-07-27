/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmarti <parmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 11:34:55 by parmarti          #+#    #+#             */
/*   Updated: 2020/07/25 18:25:41 by parmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static size_t	hex_nbrlen(unsigned long n)
{
	int	len;

	len = 1;
	n = n / 16;
	while (n)
	{
		n = n / 16;
		len++;
	}
	return (len);
}

static char		*hex_itoa(unsigned long n)
{
	char		*str;
	int			l;
	long long	nbr;
	char		*base;

	base = "0123456789abcdef";
	l = hex_nbrlen(n);
	if (!(str = malloc(sizeof(char) * l + 1)))
		return (NULL);
	str[l--] = '\0';
	if (n == 0)
		str[0] = 48;
	while (n)
	{
		str[l--] = base[n % 16];
		n = n / 16;
	}
	return (str);
}

static void		print_precision(t_data *data, int len)
{
	if (data->zero == 1 && data->precision == -1)
	{
		data->precision = data->width - 2;
		data->width = 0;
	}
	if (data->minus == 0)
	{
		if (data->width > data->precision + len && data->precision > len)
			print_flags(data, ' ', data->width - data->precision - 2);
		else if (data->width < data->precision)
			print_flags(data, ' ', -1);
		else
			print_flags(data, ' ', data->width - len);
	}
	ft_putstr_fd("0x", 1);
	print_flags(data, '0', data->precision - len + 2);
}

t_data			*print_pointer(t_data *data)
{
	unsigned long	nbr;
	char			*str;
	size_t			len;

	nbr = va_arg(data->args, unsigned long int);
	if (!(str = hex_itoa(nbr)))
		return (NULL);
	if (nbr == 0 && data->precision == 0)
		*str = '\0';
	len = ft_strlen(str) + 2;
	data->length = data->length + len;
	print_precision(data, len);
	ft_putstr_fd(str, 1);
	free(str);
	if (data->minus == 1)
	{
		if (data->width > data->precision + len && data->precision > 0)
			print_flags(data, ' ', data->width - data->precision - 2);
		else if (data->width < data->precision)
			print_flags(data, ' ', -1);
		else
			print_flags(data, ' ', data->width - len);
	}
	return (data);
}
