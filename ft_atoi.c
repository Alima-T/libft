/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alima <alima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 08:51:56 by aokhapki          #+#    #+#             */
/*   Updated: 2024/08/23 23:50:12 by alima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	number;
	int	negative_sign;

	number = 0;
	negative_sign = 1;
	while (*str != '\0' && ((*str >= '\t' && *str <= '\r') || *str == ' '))
		str++;
	if (*str != '\0' && (*str == '+' || *str == '-'))
		if (*str++ == '-')
			negative_sign *= -1;
	number = 0;
	while (*str != '\0' && (*str >= '0' && *str <= '9'))
	{
		number = number * 10 + (*str - '0');
		str++;
	}
	return (number * negative_sign);
}

