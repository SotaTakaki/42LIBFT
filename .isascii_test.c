#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	a = 'a';
	int	b = '0';
	int	c = ' ';
	int	d = '\xf7';

	printf("ft:isascii\n");
	printf("%d:%d\n", ft_isascii(a), isascii(a));
	printf("%d:%d\n", ft_isascii(b), isascii(b));
	printf("%d:%d\n", ft_isascii(c), isascii(c));
	printf("%d:%d\n", ft_isascii(d), isascii(d));
	return (0);
}
