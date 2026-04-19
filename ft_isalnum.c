#include "libft.h"

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (++i < argc)
		printf("'%c' is alpha-numeric? %d\n", argv[i][0], ft_isalnum(argv[i][0]));
	return (0);
}

int	ft_isalnum(char c)
{
	if (ft_isalpha(c) == 1)
		return (1);
    else if (ft_isdigit(c) == 1)
        return (1);
	else
		return (0);
}
