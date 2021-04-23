#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	a = 'a';
	int	b = 's';
	int	c = 'A';
	int	d = '0';
	int	e = ' ';

	printf("ft:toupper\n");
	printf("%d:%d\n", ft_toupper(a), toupper(a));
	printf("%d:%d\n", ft_toupper(b), toupper(b));
	printf("%d:%d\n", ft_toupper(c), toupper(c));
	printf("%d:%d\n", ft_toupper(d), toupper(d));
	printf("%d:%d\n", ft_toupper(e), toupper(e));
	return (0);
}
