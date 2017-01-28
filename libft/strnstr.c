/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostapch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 20:17:08 by rostapch          #+#    #+#             */
/*   Updated: 2016/11/24 20:19:49 by rostapch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *target, size_t len)
{
	char			*p1begin;
	char			*p2;
	char			*p1;
	unsigned int	k;

	if (!*target)
		return ((char*)str);
	p1 = (char*)str;
	while (len > 0)
	{
		p1begin = p1;
		p2 = (char*)target;
		k = len;
		while (*p1 && *p2 && *p1 == *p2 && k > 0)
		{
			p1++;
			p2++;
			k--;
		}
		if (!*p2)
			return (p1begin);
		p1 = p1begin + 1;
		len--;
	}
	return (NULL);
}
