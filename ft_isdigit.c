// #include <stdio.h>

// int	ft_isdigit(char c);

// int	main(int argc, char **argv)
// {
// 	int	i;

// 	i = 0;
// 	while (++i < argc)
// 		printf("'%c' is a digit? %d\n", argv[i][0], ft_isdigit(argv[i][0]));
// 	return (0);
// }

int	ft_isdigit(char c)
{
	if ('0' <= c && c <= '9')
		return (1);
	else
		return (0);
}
