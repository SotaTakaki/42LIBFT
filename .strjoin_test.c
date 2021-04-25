#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char const	*s1 = "";
	char const	*s2 = "";
	char const	*s3 = "42TOKYO";
	char const	*s4 = " to 42KYOTO";

	printf("s1 == NULL-------------------------\n");
	printf("%s:\n", ft_strjoin(s1, s3));
	printf("s2 == NULL-------------------------\n");
	printf("%s:\n", ft_strjoin(s3, s1));
	printf("s1 && s2 == NULL-------------------\n");
	printf("%s:\n", ft_strjoin(s1, s2));
	printf("normal-------------------\n");
	printf("%s:\n", ft_strjoin(s3, s4));
}
