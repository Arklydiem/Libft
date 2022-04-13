/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: argomez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 20:10:40 by argomez           #+#    #+#             */
/*   Updated: 2022/04/11 14:35:09 by argomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*bloc;

	if ((nmemb == SIZE_MAX || size == SIZE_MAX) && (size > 1 || nmemb > 1))
		return (NULL);
	bloc = malloc(nmemb * size);
	if (bloc == NULL)
		return (NULL);
	ft_bzero(bloc, nmemb * size);
	return (bloc);
}
