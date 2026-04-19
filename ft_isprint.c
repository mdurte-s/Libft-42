// #include <stdio.h>

// int ft_isprint(int c);

// int	main(int argc, char **argv)
// {
// 	int	i;

// 	i = 0;
// 	while (++i < argc)
// 		printf("'%c' is printable? %d\n", argv[i][0], ft_isprint(argv[i][0]));
// 	return (0);
// }

int	ft_isprint(int c)
{
	if (32 <= c && c <= 126)
		return (1);
	else
		return (0);
}
