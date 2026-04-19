#include <stdio.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (++i < argc)
		printf("'%c' %d\n", argv[i], ft_(argv[i]));
	return (0);
}

int	ft_()
{
	
}