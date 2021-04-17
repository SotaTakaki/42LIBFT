/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakaki <stakaki@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 22:33:14 by stakaki           #+#    #+#             */
/*   Updated: 2021/04/14 15:53:41 by stakaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_split(char const *s, char c);
char	**ft_malloc_new_str(char const *s, char c);
char	**ft_malloc_split(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**new_str;

	new_str = ft_malloc_split(s, c);
	return (new_str);
}

	//cc is skip && if xc or x\0, count flag
int	ft_count_split(char const *s, char c)
{
	int	i;
	int	split_flag;
	int	len_s;

	i = 0;
	split_flag = 0;
	len_s = ft_strlen(s);
	while (s[i] != '\0')
	{
		if ((s[i] != s[i + 1] && s[i + 1] == c) || (i  == len_s - 1 && s[i] != c))
			split_flag++;
		i++;
	}
	return (split_flag);
}

//malloc all range(bye-bye c)
char	**ft_malloc_new_str(char const *s, char c)
{
	int		count_split;
	char	**new_str;

	count_split = ft_count_split(s, c);
	new_str = (char **)malloc(count_split * sizeof(char) + 1);
	if (new_str == NULL)
		return (NULL);
	new_str[count_split] = NULL;
	return (new_str);
}

char	**ft_malloc_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	int		len_s;
	int		start;
	char	*malloc_split;
	char	**new_str;

	i = 0;
	k = 0;
	len_s = ft_strlen(s);
	start = 0;
	new_str = ft_malloc_new_str(s, c);
	while (s[i] != '\0')
	{
		if ((s[i] != s[i + 1] && s[i + 1] == c) || (i  == len_s - 1 && s[i] != c))
		{
			malloc_split = (char *)malloc((i + 1 - start) * sizeof(char) + 1);
			if (malloc_split == NULL)
				return (NULL);
			j = 0;
			while (start <= i)
			{
				malloc_split[j] = s[start];
				j++;
				start++;
			}
			malloc_split[j] = '\0';
			new_str[k] = malloc_split;
			k++;
			start = i + 1;
		}
		i++;
		if ((s[i + 1] == c) || (i  == len_s - 1 && s[i] != c))
			start++;
	}
	return (new_str);
}
