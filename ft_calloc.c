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

/*int	main(int argc, char **argv)
{
	size_t	i;
	size_t	nmemb;
	int		*array;

	if (argc != 2)
		return (0);
	i = 0;
	nmemb = (size_t)ft_atoi(argv[1]);
	array = (int *)ft_calloc(nmemb, sizeof(int));
	if (!array)
	{
		printf("NULL\n");
		return (0);
	}
	while (i < nmemb)
	{
		printf("%d ", array[i]);
		i++;
	}
	printf("\n");
	return (0);
}*/

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*r;

	if (2147483647 < nmemb && size != 0)
		return (NULL);
	if (2147483647 < size && nmemb != 0)
		return (NULL);
	r = (void *)malloc(nmemb * size);
	if (!r)
		return (NULL);
	ft_bzero(r, nmemb * size);
	return (r);
}
