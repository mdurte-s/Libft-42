#include <stdio.h>

int ft_tolower(int c);

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (++i < argc)
		printf("tolower('%c') = %c\n", argv[i][0], ft_tolower(argv[i][0]));
	return (0);
}

int	ft_tolower(int c)
{
	if	('A' <= c && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
