#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	word[] = "Hello42";
	char	word2[] = "";
	char	word3[] = "\0";

	printf("ft:strlen\n");
	printf("%lu:%lu\n", ft_strlen(word), strlen(word));
	printf("%lu:%lu\n", ft_strlen(word2), strlen(word2));
	printf("%lu:%lu\n", ft_strlen(word3), strlen(word3));
	return (0);
}
