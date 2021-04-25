#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char const *s = "42TOKYO to 42KYOTO";

	printf("len_s <= start--------------------------------------------\n");
	printf("%s:\n", ft_substr(s, 21, 5));
	printf("start < len_s && len < start to last-----------------------\n");
	printf("%s:42KYOTO\n", ft_substr(s, 11, 7));
	printf("start < len_s && start to last < len-----------------------\n");
	printf("%s:42TOKYO to 42KYOTO\n", ft_substr(s, 0, 25));
	printf("start && len == 0------------------------------------------\n");
	printf("%s:\n", ft_substr(s, 0, 0));
	printf("start == 0------------------------------------------\n");
	printf("%s:42TOKYO\n", ft_substr(s, 0, 7));
	printf("len == 0------------------------------------------\n");
	printf("%s:\n", ft_substr(s, 7, 0));
}
