#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	a = 'a';
	int	b = '0';
	int	c = ' ';
	int	d = '\n';
	int	e = '\xf7';

	printf("ft:isprint\n");
	printf("%d:%d\n", ft_isprint(a), isprint(a));
	printf("%d:%d\n", ft_isprint(b), isprint(b));
	printf("%d:%d\n", ft_isprint(c), isprint(c));
	printf("%d:%d\n", ft_isprint(d), isprint(d));
	printf("%d:%d\n", ft_isprint(e), isprint(e));
	return (0);
}
