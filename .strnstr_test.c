#include "libft.h"
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	str[] = "42tokyo";
	char	str2[] = "";
	char	a[] = "tokyo";
	char	b[] = "42to\0aaaaa";
	char	c[] = "";

	printf("ft:strnstr\n");
	printf("%s:%s\n", ft_strnstr(str, a, 1),strnstr(str, a, 1));
	printf("%s:%s\n", ft_strnstr(str, a, 8),strnstr(str, a, 8));
	printf("%s:%s\n", ft_strnstr(str, b, 8),strnstr(str, b, 8));
	printf("%s:%s\n", ft_strnstr(str, c, 3),strnstr(str, c, 3));
	printf("%s:%s\n", ft_strnstr(str2, a, 3),strnstr(str2, a, 3));
	return (0);
}
