#include "libft.h"
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	str[] = "42tokyo";
	char	str2[] = "";
	int		a = 't';
	int		b = 'a';
	int		c = '\0';

	printf("ft:strchr\n");
	printf("%s:%s\n", ft_strrchr(str,a),strrchr(str,a));
	printf("%s:%s\n", ft_strrchr(str,b),strrchr(str,b));
	printf("%s:%s\n", ft_strrchr(str,c),strrchr(str,c));
	printf("%s:%s\n", ft_strrchr(str2,a),strrchr(str2,a));
	printf("%s:%s\n", ft_strrchr(str2,b),strrchr(str2,b));
	printf("%s:%s\n", ft_strrchr(str2,c),strrchr(str2,c));
	return (0);
}
