#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "42TOKYO";
	char	str2[] = "42TOKYO";
	int		a = 'a';
	int		b = '\0';

	printf("ft:memset\n");

	ft_memset(str, a, 0);
	memset(str2, a, 0);
	printf("%s:%s\n", str, str2);

	ft_memset(str, a, 4);
	memset(str2, a, 4);
	printf("%s:%s\n", str, str2);

	ft_memset(str, b, 7);
	memset(str2, b, 7);
	printf("%s:%s\n", str, str2);
	return (0);
}
