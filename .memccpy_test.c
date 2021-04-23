#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dst0[100];
	char	dst1[100];
	char	dst2[100];
	char	dst3[100];
	char	str[] = "42TOKYO";
	int		a = 'A';
	int		b = 'O';

	printf("ft:memccpy\n");
	ft_memccpy(dst0, str, a, 7);
	memccpy(dst1, str, a, 7);
	printf("%s:%s\n", dst0, dst1);

	ft_memccpy(dst2, str, b, 7);
	memccpy(dst3, str, b, 7);
	printf("%s:%s\n", dst2, dst3);
	return (0);
}
