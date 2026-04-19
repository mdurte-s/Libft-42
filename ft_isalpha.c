// #include <stdio.h>

// int	ft_isalpha(char c);

// int	main(int argc, char **argv)
// {
// 	int	i;

// 	i = 0;
// 	while (++i < argc)
// 		printf("'%c' is alpha? %d\n", argv[i][0], ft_isalpha(argv[i][0]));
// 	return (0);
// }

int	ft_isalpha(char c)
{
	if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'))
		return (1);
	else
		return (0);
}
