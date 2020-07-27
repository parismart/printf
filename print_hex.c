/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmarti <parmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 13:37:47 by parmarti          #+#    #+#             */
/*   Updated: 2020/07/21 20:42:21 by parmarti         ###   ########.fr       */
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

static char		*hex_itoa_x(unsigned long n, char x)
{
	char		*str;
	char		*base;
	char		*base_mayus;
	size_t		l;

	base = "0123456789abcdef";
	base_mayus = "0123456789ABCDEF";
	l = hex_nbrlen(n);
	if (!(str = malloc(sizeof(char) * l + 1)))
		return (NULL);
	str[l--] = '\0';
	if (n == 0)
		str[0] = 48;
	if (x == 'X')
		base = base_mayus;
	while (n)
	{
		str[l--] = base[n % 16];
		n = n / 16;
	}
	return (str);
}

static void		print_precision(t_data *data, char *str, int len)
{
	if (data->minus == 0)
	{
		if (data->precision > len)
			print_flags(data, ' ', data->width - data->precision);
		else
			print_flags(data, ' ', data->width - len);
	}
	print_flags(data, '0', data->precision - len);
	ft_putstr_fd(str, 1);
	if (data->minus == 1)
	{
		if (data->precision > len)
			print_flags(data, ' ', data->width - data->precision);
		else
			print_flags(data, ' ', data->width - len);
	}
}

t_data			*print_hex(t_data *data, char x)
{
	char			*str;
	size_t			len;
	unsigned long	nbr;

	nbr = va_arg(data->args, unsigned int);
	if (nbr == 0 && data->precision == 0)
	{
		print_flags(data, ' ', data->width);
		return (data);
	}
	if (data->zero == 1 && data->precision == -1)
		data->precision = data->width;
	str = hex_itoa_x(nbr, x);
	if (!str)
		return (NULL);
	len = ft_strlen(str);
	data->length = data->length + len;
	print_precision(data, str, len);
	free(str);
	return (data);
}
