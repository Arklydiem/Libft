/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argomez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:41:24 by argomez           #+#    #+#             */
/*   Updated: 2022/04/12 16:36:44 by argomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *s, size_t n)
{
	unsigned char		*t;
	const unsigned char	*u;

	if (!s && !dest)
		return (NULL);
	t = dest;
	u = s;
	while (n-- > 0)
		*t++ = *u++;
	return (dest);
}
