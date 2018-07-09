/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkunz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 09:46:16 by lkunz             #+#    #+#             */
/*   Updated: 2018/07/07 10:28:27 by lkunz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*csrc;
	char		*cdst;

	i = 0;
	csrc = (char *)src;
	cdst = (char *)dst;
	if (cdst >= csrc)
	{
		while (i < len)
		{
			*(cdst + i) = *(csrc + i);
			i++;
		}
	}
	else
		while (len > 0)
		{
			*(cdst + len) = *(csrc + len);
			len--;
		}
	return (dst);
}
