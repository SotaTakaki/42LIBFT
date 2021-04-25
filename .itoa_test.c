#include "libft.h"
#include <stdio.h>

int	main(void)
{
	int	a = 2147483647;
	int	b = -2147483648;
	int	c = -123;
	int	d = 123;

	printf("%s:2147483647\n",ft_itoa(a));
	printf("%s:-2147483648\n",ft_itoa(b));
	printf("%s:-123\n",ft_itoa(c));
	printf("%s:123\n",ft_itoa(d));
	return (0);
}
