#include <stdio.h>

int ft_toupper(int c);

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (++i < argc)
		printf("toupper('%c') = %c\n", argv[i][0], ft_toupper(argv[i][0]));
	return (0);
}

int	ft_toupper(int c)
{
	if	('a' <= c && c <= 'z')
		return (c - 32);
	else
		return (c);
}
