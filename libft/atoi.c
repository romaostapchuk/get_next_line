/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostapch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 15:52:16 by rostapch          #+#    #+#             */
/*   Updated: 2016/11/25 15:54:43 by rostapch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int nb;
	int negative;

	i = 0;
	nb = 0;
	negative = 0;
	while (str[i] <= 32 && str[i] != '\0')
		i++;
	if (str[i] == '-')
		negative = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		nb *= 10;
		nb += ((int)str[i] - '0');
		i++;
	}
	if (negative == 1)
		return (-nb);
	return (nb);
}
