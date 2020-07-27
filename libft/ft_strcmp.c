/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmarti <parmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 11:05:35 by parmarti          #+#    #+#             */
/*   Updated: 2020/07/22 23:35:08 by parmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	if (ft_strlen(s1) > ft_strlen(s2))
		return (ft_strncmp(s1, s2, ft_strlen(s1)));
	return (ft_strncmp(s1, s2, ft_strlen(s2)));
}
