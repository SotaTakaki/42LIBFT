#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	a = 'a';
	int	b = '0';
	int	c = ' ';
	int	d = '!';

	printf("ft:isalnum\n");
	printf("%d:%d\n", ft_isalnum(a), isalnum(a));
	printf("%d:%d\n", ft_isalnum(b), isalnum(b));
	printf("%d:%d\n", ft_isalnum(c), isalnum(c));
	printf("%d:%d\n", ft_isalnum(d), isalnum(d));
	return (0);
}
