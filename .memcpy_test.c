#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dst0[100];
	char	dst1[100];
	char	str2[] = "42T\0KYO";
	int		i = 0;

	printf("ft\n");
	ft_memcpy(dst0, str2, 7);
	memcpy(dst1, str2, 7);
	while (i < 7)
	{
		printf("%c\n", dst0[i]);
		i++;
	}
	i = 0;
	printf("memcpy\n");
	while (i < 7)
	{
		printf("%c\n", dst1[i]);
		i++;
	}
	return (0);
}
