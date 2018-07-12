/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkunz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 09:46:16 by lkunz             #+#    #+#             */
/*   Updated: 2018/07/11 15:42:13 by lkunz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*csrc;
	char		*cdst;
	int			lenc;

	lenc = (int)len;
	i = 0;
	csrc = (char *)src;
	cdst = (char *)dst;
	if (cdst < csrc)
	{
		while (i < len)
		{
			*(cdst + i) = *(csrc + i);
			i++;
		}
	}
	else
	{
		while (--lenc >= 0)
			*(cdst + lenc) = *(csrc + lenc);
	}
	return (dst);
}
