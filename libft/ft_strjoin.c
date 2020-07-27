/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parmarti <parmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 21:02:13 by parmarti          #+#    #+#             */
/*   Updated: 2020/07/08 19:20:09 by parmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		s1len;
	int		s2len;
	int		strlen;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	strlen = s1len + s2len;
	str = malloc(sizeof(char) * strlen + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < s1len)
		str[i++] = *s1++;
	while (i < strlen)
		str[i++] = *s2++;
	str[i] = '\0';
	return (str);
}
