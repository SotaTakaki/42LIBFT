
#include "libft.h"
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	str[] = "42tokyo";
	char	str2[] = "";
	int		a = 'o';
	int		b = 'a';
	int		c = '\0';

	printf("ft:strchr\n");
	printf("%s:%s\n", ft_strchr(str,a),strchr(str,a));
	printf("%s:%s\n", ft_strchr(str,b),strchr(str,b));
	printf("%s:%s\n", ft_strchr(str,c),strchr(str,c));
	printf("%s:%s\n", ft_strchr(str2,a),strchr(str2,a));
	printf("%s:%s\n", ft_strchr(str2,b),strchr(str2,b));
	printf("%s:%s\n", ft_strchr(str2,c),strchr(str2,c));
	return (0);
}
