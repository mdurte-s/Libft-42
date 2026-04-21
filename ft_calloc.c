/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 10:09:38 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/04/21 14:44:27 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*int	main(void)
{
	size_t	i;
	size_t	nmemb;
	int		*array;

	i = -1;
	nmemb = 10;
	array = (int *)ft_calloc(nmemb, sizeof(int));
	while (++i < nmemb)
		printf("%d ", array[i]);
	return (0);
}*/

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*r;

	r = (unsigned char *)malloc(nmemb * size);
	if (!r)
		return (0);
	ft_bzero(r, nmemb * size);
	return ((void *)r);
}
