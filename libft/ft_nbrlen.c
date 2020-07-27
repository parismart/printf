/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmarti <parmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 09:44:02 by parmarti          #+#    #+#             */
/*   Updated: 2020/07/20 10:36:36 by parmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_nbrlen(long long nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
	{
		nbr = -nbr;
		len++;
	}
	while (nbr > 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}
