#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{

	char	*str = ft_calloc(5, 1);
	char	*str2 = calloc(5, 1);
	int		i = ft_memcmp(str, str2, 5);

	printf("%d\n", i);

	return (0);
}
