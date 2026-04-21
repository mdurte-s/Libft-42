/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 11:01:12 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/04/21 11:17:12 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*int	main(int argc, char **argv)
{
	size_t	len;

	len	= 10;
	if (argc != 3)
		return (0);
	printf("string: %s\nstart: %c\nlen: %zu\nsubtring: %s\n",
		argv[1], argv[2][0], len, ft_substr(argv[1], argv[2][0], len));
	return (0);
}*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char *)malloc(len * sizeof(char));
	if (!str)
		return (0);
	i = -1;
	while (s[i] != (char)start)
		i++;
	j = -1;
	while (++j < len)
		str[j] = s[i + j];
	str[j] = '\0';
	return (str);
}
