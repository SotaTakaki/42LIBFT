#include "libft.h"
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	str[] = "42to\0kyo";
	char	str2[] = "";
	int		a = 'y';
	int		b = 'a';

	printf("ft:memchr\n");
	printf("%s:%s\n", ft_memchr(str, a, 7), memchr(str, a, 7));
	printf("%s:%s\n", ft_memchr(str, b, 7), memchr(str, b, 7));
	printf("%s:%s\n", ft_memchr(str2, a, 1), memchr(str2, a, 1));
	return (0);
}
