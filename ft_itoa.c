/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:34:27 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/04/22 21:37:01 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		module(int n);
static int		intlen(int n);

/*int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("int: %d\n", ft_atoi(argv[1]));
	printf("char: %s\n", ft_itoa(ft_atoi(argv[1])));
	return (0);
}*/

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		x;

	i = intlen(n);
	x = 0;
	if (n < 0)
		x = 1;
	n = module(n);
	str = (char *)malloc((i + 1 + x) * sizeof(char));
	if (!str)
		return (0);
	str[0] = '-';
	str[i + x] = '\0';
	while (--i + x >= x)
	{
		str[i + x] = n % 10 + 48;
		n = n / 10;
	}
	return (str);
}

static int	intlen(int n)
{
	int	i;

	i = 1;
	while (n > 9 || n < -9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static int	module(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
