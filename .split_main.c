#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char const *s, char c);

int	main(void)
{
	char	*str = "      split       this for   me  !       ";
	char	*str2 = "split  ||this|for|me|||||!|";
	char	*str3 = "";
	char	*str4 = "aaaaaaa";
	char	**box;
	int		i;

	printf("ft---------------------------\n");
	i = 0;
	box = ft_split(str, ' ');
	while (i < 6)
	{
		printf("%s\n", box[i]);
		i++;
	}
	free(box);
	printf("ans---------------------------\n");
	printf("split\nthis\nfor\nme\n!\nNULL\n");

	printf("ft---------------------------\n");
	i = 0;
	box = ft_split(str2, '|');
	while (i < 6)
	{
		printf("%s\n", box[i]);
		i++;
	}
	free(box);
	printf("ans---------------------------\n");
	printf("split  \nthis\nfor\nme\n!\nNULL\n");

	printf("ft---------------------------\n");
	i = 0;
	box = ft_split(str3, '\0');
	while (i < 1)
	{
		printf("%s\n", box[i]);
		i++;
	}
	free(box);
	printf("ans---------------------------\n");
	printf("NULL\n");

	printf("ft---------------------------\n");
	i = 0;
	box = ft_split(str4, '\0');
	while (i < 1)
	{
		printf("%s\n", box[i]);
		i++;
	}
	free(box);
	printf("ans---------------------------\n");
	printf("aaaaaaa\n");

	printf("ft---------------------------\n");
	i = 0;
	box = ft_split(str4, 'a');
	while (i < 1)
	{
		printf("%s\n", box[i]);
		i++;
	}
	free(box);
	printf("ans---------------------------\n");
	printf("NULL\n");
	return (0);
}
