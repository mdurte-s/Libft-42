/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdurte-s <mdurte-s@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 13:19:41 by mdurte-s          #+#    #+#             */
/*   Updated: 2026/04/21 14:32:52 by mdurte-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*size_t	count_strings(char const *s, char c);

int	main(int argc, char **argv)
{
	size_t	i;
	size_t	c;

	i = -1;
	c = count_strings(argv[1], argv[2][0]);
	printf("%zu\n", c);
	if (argc != 3)
		return (0);
	printf("string: %s\nsplit: %c\nreturn: ", argv[1], argv[2][0]);
	ft_split(argv[1], argv[2][0]);
	while (++i < c)
		printf("%s ", ft_split(argv[1], argv[2][0])[i]);
	return (0);
}*/

char	**ft_split(char const *s, char c)
{
	size_t	cs;
	size_t	i;
	size_t	j;
	size_t	k;
	char	**array;

	array = (char **)malloc((count_strings(s, c) + 1) * sizeof(char *));
	cs = -1;
	i = 0;
	while (++cs < count_strings(s, c))
	{
		j = 1;
		while (s[i] == c && s[i])
			i++;
		while (s[i + j] != c && s[i + j])
			j++;
		array[cs] = (char *)malloc((j + 1) * sizeof(char));
		k = -1;
		while (++k < j)
			array[cs][k] = s[i + k];
		i = i + j;
	}
	array[cs] = NULL;
	return (array);
}

size_t	count_strings(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	count_str;

	i = 0;
	count_str = 0;
	while (s[i])
	{
		j = 1;
		if (s[i] != c)
		{
			count_str++;
			while (s[i + j] != c && s[i + j])
				j++;
		}
		i = i + j;
	}
	return (count_str);
}
