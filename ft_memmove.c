/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alima <alima@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:01:56 by aokhapki          #+#    #+#             */
/*   Updated: 2024/08/23 22:45:02 by alima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if ((NULL == src && NULL == dst) || len < 0)
		return (dst);
	if (dst > src)
		while (len--)
			*((unsigned char *)dst + len) = *((unsigned char *)src + len);
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
