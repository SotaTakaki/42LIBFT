#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	word[] = "42TO\0KYO";
	char	word2[] = "42KYOTO";
	char	word3[] = "42";
	char	word4[] = "";
	char	word5[] = "\0";


	printf("ft:memcmp\n");
	printf("%d:%d\n", ft_memcmp(word, word, 0), memcmp(word, word, 0));
	printf("%d:%d\n", ft_memcmp(word, word, 8), memcmp(word, word, 8));
	printf("%d:%d\n", ft_memcmp(word, word2, 8), memcmp(word, word2, 8));
	printf("%d:%d\n", ft_memcmp(word, word3, 8), memcmp(word, word3, 8));
	printf("%d:%d\n", ft_memcmp(word, word4, 8), memcmp(word, word4, 8));
	printf("%d:%d\n", ft_memcmp(word, word5, 8), memcmp(word, word5, 8));
	printf("%d:%d\n", ft_memcmp(word2, word5, 8), memcmp(word, word5, 8));
	return (0);
}
