
#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dst[] = "42TOKYO to 42KYOTO";
	char	dst1[] = "42TOKYO to 42KYOTO";
	char	dst2[] = "42TOKYO to 42KYOTO";
	char	dst3[] = "42TOKYO to 42KYOTO";
	char	src[] = "42OSAKA";

	ft_memmove(dst, &dst[11], 7);
	memmove(dst1, &dst1[11], 7);
	printf("%s:%s\n", dst, dst1);

	ft_memmove(dst2, src, 7);
	memmove(dst3, src, 7);
	printf("%s:%s\n", dst2, dst3);
}
