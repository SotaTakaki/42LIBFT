#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	a = 'A';
	int	b = 'S';
	int	c = 'a';
	int	d = '0';
	int	e = ' ';

	printf("ft:tolower\n");
	printf("%d:%d\n", ft_tolower(a), tolower(a));
	printf("%d:%d\n", ft_tolower(b), tolower(b));
	printf("%d:%d\n", ft_tolower(c), tolower(c));
	printf("%d:%d\n", ft_tolower(d), tolower(d));
	printf("%d:%d\n", ft_tolower(e), tolower(e));
	return (0);
}
