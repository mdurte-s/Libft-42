#include "libft.h"

// size_t	ft_strlen(const char *s);

// int	main(int argc, char **argv)
// {
// 	int	i;

// 	i = 0;
// 	while (++i < argc)
// 		printf("strlen('%s') = %zu\n", argv[i], ft_strlen(argv[i]));
// 	return (0);
// }

size_t	ft_strlen(const char *s)
{
	size_t	i;

    i = 0;
    while (s[i])
        i++;
    return (i); 
}
