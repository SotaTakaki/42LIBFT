#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	word[] = "Hello 42";
	char	word2[] = "";

	printf("ft:strdup\n");
	printf("%s:%s\n", ft_strdup(word), strdup(word));
	printf("%s:%s\n", ft_strdup(word2), strdup(word2));
	return (0);
}
