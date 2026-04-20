#include "libft.h"

// int	main(int argc, char **argv)
// {
// 	int     i;
//     char    *new;

//     (void)argc;
//     i = 0;
//     while (++i < argc)
//     {
//         new = ft_strdup(argv[i]);
// 	    printf("The new string is: %s\n", new);
//     }
// 	return (0);
// }

char	*ft_strdup(const char *s1)
{
	size_t  len_s;
	size_t  i;
	char    *new;

	len_s = ft_strlen(s1);
	new = (char *)malloc((len_s + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (i < len_s)
	{
		new[i] = s1[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
