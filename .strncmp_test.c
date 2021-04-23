#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	word[] = "ABC";
	char	word2[] = "";
	char	word3[] = "\0";


	printf("ft:strncmp\n");
	printf("%d:%d\n", ft_strncmp(word, "A", 0), strncmp(word, "A", 0));
	printf("%d:%d\n", ft_strncmp(word, "A", 1), strncmp(word, "A", 1));
	printf("%d:%d\n", ft_strncmp(word, "A", 2), strncmp(word, "A", 2));
	printf("%d:%d\n", ft_strncmp(word, "ABC", 3), strncmp(word, "ABC", 3));
	printf("%d:%d\n", ft_strncmp(word, "B", 2), strncmp(word, "B", 2));
	printf("%d:%d\n", ft_strncmp(word, "ACB", 3), strncmp(word, "ACB", 3));
	printf("%d:%d\n", ft_strncmp(word, "", 2), strncmp(word, "", 2));

	printf("%d:%d\n", ft_strncmp(word2, "", 1), strncmp(word2, "",1));
	printf("%d:%d\n", ft_strncmp(word2, "AB", 2), strncmp(word2, "AB", 2));

	printf("%d:%d\n", ft_strncmp(word3, "\0", 2), strncmp(word3, "\0", 2));
	printf("%d:%d\n", ft_strncmp(word3, "ABC", 2), strncmp(word3, "ABC", 2));
	return (0);
}
