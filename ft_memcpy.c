/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 11:24:30 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/04/20 15:01:51 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

int	main(int argc, char **argv)
{
	size_t	i;

	
	return (0);
}

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
{
	size_t	i;
	
	if (!dst || !src)
		return (0);
	if (n == 0 || dst == src)
		return (dst);
	i = -1;
	while (++i < n)
		dst[i] = src[i];
	return (dst);
}
