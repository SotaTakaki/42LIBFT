#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	buf0[0];
	char	buf5[5];
	char	buf20[20];
	char	word[] = "123456";
	char	word2[] = "abcdefghi";
	char	word3[] = "";

	printf("size     :%lu\n", strlcpy(buf0, word, sizeof(buf0)));
	printf("cpy word :%s\n", buf0);
	printf("size     :%u\n", ft_strlcpy(buf0, word, sizeof(buf0)));
	printf("cpy word :%s\n", buf0);
	printf("------------------------------------------------\n");
	printf("size     :%lu\n", strlcpy(buf5, word, sizeof(buf5)));
	printf("cpy word :%s\n", buf5);
	printf("size     :%u\n", ft_strlcpy(buf5, word, sizeof(buf5)));
	printf("cpy word :%s\n", buf5);
	printf("------------------------------------------------\n");
	printf("size     :%lu\n", strlcpy(buf20, word2, sizeof(buf20)));
	printf("cpy word :%s\n", buf20);
	printf("size     :%u\n", ft_strlcpy(buf20, word2, sizeof(buf20)));
	printf("cpy word :%s\n", buf20);
	printf("------------------------------------------------\n");
	printf("size     :%lu\n", strlcpy(buf5, word3, sizeof(buf5)));
	printf("cpy word :%s\n", buf5);
	printf("size     :%u\n", ft_strlcpy(buf5, word3, sizeof(buf5)));
	printf("cpy word :%s\n", buf5);
	printf("------------------------------------------------\n");
	printf("size     :%lu\n", strlcpy(buf0, word3, sizeof(buf0)));
	printf("cpy word :%s\n", buf0);
	printf("size     :%u\n", ft_strlcpy(buf0, word3, sizeof(buf0)));
	printf("cpy word :%s\n", buf0);
	return (0);
}
