/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmarti <parmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 09:48:36 by parmarti          #+#    #+#             */
/*   Updated: 2020/07/25 18:22:17 by parmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static char	*precision_string(t_data *data, char *str)
{
	char	*ptr;

	if (data->precision > -1 && str)
	{
		if (!(ptr = malloc(data->precision + 1)))
			return (NULL);
		ft_strlcpy(ptr, str, data->precision + 1);
		return (ptr);
	}
	else if (data->precision == -1 && str)
		return (ft_strdup(str));
	else if (data->precision == -1 && !str)
		return (ft_strdup("(null)"));
	else if (data->precision > -1 && !str)
	{
		str = ft_strdup("(null)");
		if (!(ptr = malloc(data->precision + 1)))
			return (NULL);
		ft_strlcpy(ptr, str, data->precision + 1);
		free(str);
		return (ptr);
	}
	return (str);
}

t_data		*print_string(t_data *data)
{
	char	*str;
	int		len;

	str = va_arg(data->args, char *);
	str = precision_string(data, str);
	len = ft_strlen(str);
	data->length = data->length + len;
	if (data->minus == 0)
	{
		if (data->zero == 0)
			print_flags(data, ' ', data->width - len);
		else
			print_flags(data, '0', data->width - len);
	}
	ft_putstr_fd(str, 1);
	if (data->minus == 1)
		print_flags(data, ' ', data->width - len);
	free(str);
	return (data);
}
