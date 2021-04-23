#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "42TOKYO";
	char	str2[] = "42TOKYO";
	char	str3[] = "";
	char	str4[] = "";

	printf("ft:bzero\n");

	ft_bzero(str, 0);
	bzero(str2, 0);
	printf("%s:%s\n", str, str2);

	ft_bzero(str, 1);
	bzero(str2, 1);
	printf("%c%c:%c%c\n", str[0], str[1], str2[0], str2[1]);

	ft_bzero(str3, 1);
	bzero(str4, 1);
	printf("%s:%s\n", str3, str4);
	return (0);
}
