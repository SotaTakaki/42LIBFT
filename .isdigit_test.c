#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	a = 'a';
	int	b = '0';
	int	c = ' ';
	int	d = '!';

	printf("ft:isdigit\n");
	printf("%d:%d\n", ft_isdigit(a), isdigit(a));
	printf("%d:%d\n", ft_isdigit(b), isdigit(b));
	printf("%d:%d\n", ft_isdigit(c), isdigit(c));
	printf("%d:%d\n", ft_isdigit(d), isdigit(d));
	return (0);
}
