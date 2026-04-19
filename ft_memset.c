#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len);

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (++i < argc)
		printf("'%c' %d\n", argv[i], ft_(argv[i]));
	return (0);
}

void    *ft_memset(void *b, int c, size_t len)
{
	return (b);
}