
#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	a = 'a';
	int	b = '0';
	int	c = ' ';
	int	d = '!';

	printf("ft:isalpha\n");
	printf("%d:%d\n", ft_isalpha(a), isalpha(a));
	printf("%d:%d\n", ft_isalpha(b), isalpha(b));
	printf("%d:%d\n", ft_isalpha(c), isalpha(c));
	printf("%d:%d\n", ft_isalpha(d), isalpha(d));
	return (0);
}
