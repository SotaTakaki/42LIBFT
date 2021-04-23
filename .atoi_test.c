
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	a[] = "2147483647";
	char	b[] = "-2147483648";
	char	c[] = " -123";
	char	d[] = "\t12\t3";
	char	e[] = "12a3";
	char	h[] = "-12-3";
	char	i[] = "12 12 12";
	char	j[] = "+ + +123";
	char	k[] = "-+--+--123";
	char	l[] = "a123b";
	char    m[] = "abc";

	printf("ft:atoi\n");
	printf("%d:%d\n",ft_atoi(a),atoi(a));
	printf("%d:%d\n",atoi(b),ft_atoi(b));
	printf("%d:%d\n",atoi(c),ft_atoi(c));
	printf("%d:%d\n",atoi(d),ft_atoi(d));
	printf("%d:%d\n",atoi(e),ft_atoi(e));
	printf("%d:%d\n",atoi(h),ft_atoi(h));
	printf("%d:%d\n",atoi(i),ft_atoi(i));
	printf("%d:%d\n",atoi(j),ft_atoi(j));
	printf("%d:%d\n",atoi(k),ft_atoi(k));
	printf("%d:%d\n",atoi(l),ft_atoi(l));
	printf("%d:%d\n",atoi(m),ft_atoi(m));
	return (0);
}
