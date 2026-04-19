#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (++i < argc)
		printf("'%c' %d\n", argv[i], ft_(argv[i]));
	return (0);
}

void	ft_bzero(void *s, size_t n)
{
	
}