
#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	buf0[] = "";
	char	buf1[] = "";
	char	buf10[10] = "Hello";
	char	buf11[10] = "Hello";
	char	buf100[10] = "Hello";
	char	buf101[10] = "Hello";
	char	buf20[20] = "42";
	char	buf201[20] = "42";
	char	word[] = "Tokyo";
	char	word2[] = "Guacamole";
	char	word3[] = "";

	printf("size < total word------------------------------------------\n");
	printf("size     :%lu\n", strlcat(buf10, word2, sizeof(buf10)));
	printf("cpy word :%s\n", buf10);
	printf("size     :%u\n", ft_strlcat(buf11, word2, sizeof(buf11)));
	printf("cpy word :%s\n", buf11);
	printf("size = 0------------------------------------------\n");
	printf("size     :%lu\n", strlcat(buf0, word, sizeof(buf0)));
	printf("cpy word :%s\n", buf0);
	printf("size     :%u\n", ft_strlcat(buf1, word, sizeof(buf1)));
	printf("cpy word :%s\n", buf1);
	printf("size = total word------------------------------------------\n");
	printf("size     :%lu\n", strlcat(buf100, word, sizeof(buf100)));
	printf("cpy word :%s\n", buf100);
	printf("size     :%u\n", ft_strlcat(buf101, word, sizeof(buf101)));
	printf("cpy word :%s\n", buf101);
	printf("size > total word------------------------------------------\n");
	printf("size     :%lu\n", strlcat(buf20, word2, sizeof(buf20)));
	printf("cpy word :%s\n", buf20);
	printf("size     :%u\n", ft_strlcat(buf201, word2, sizeof(buf201)));
	printf("cpy word :%s\n", buf201);
	return (0);
}
