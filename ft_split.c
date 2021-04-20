/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakaki <stakaki@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 22:33:14 by stakaki           #+#    #+#             */
/*   Updated: 2021/04/20 22:40:11 by stakaki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_split(char const *s, char c);
char	**ft_malloc_new_s(char const *s, char c);
char	**ft_get_split(char const *s, char c);
char	*ft_make_split(char const *s, int i, int j);

char	**ft_split(char const *s, char c)
{
	char	**new_s;

	if (s == NULL)
		return (NULL);
	new_s = ft_malloc_new_s(s, c);
	if (new_s == NULL)
		return (new_s);
	free(new_s);
	new_s = ft_get_split(s, c);
	return (new_s);
}

//\0\0 is skip && if x\0 count flag.
int	ft_count_split(char const *s, char c)
{
	int		i;
	int		split_flag;

	i = 0;
	split_flag = 0;
	while (s[i] != '\0')
	{
		if ((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == '\0'))
			split_flag++;
		i++;
	}
	return (split_flag);
}

//malloc range of words.
char	**ft_malloc_new_s(char const *s, char c)
{
	int		count_split;
	char	**new_s;

	count_split = ft_count_split(s, c);
	new_s = (char **)malloc(count_split * sizeof(char) + 1);
	if (new_s == NULL)
		return (NULL);
	new_s[count_split] = NULL;
	return (new_s);
}

char	**ft_get_split(char const *s, char c)
{
	int		start;
	int		end;
	int		i;
	char	**new_s;
	char	*split;

	start = 0;
	end = 0;
	i = 0;
	new_s = ft_malloc_new_s(s, c);
	while (s[end] != '\0')
	{
		if (s[end] == c)
			start++;
		if ((s[end] != c && s[end + 1] == c) || (s[end] != c && s[end + 1] == '\0'))
		{
			split = ft_make_split(s, start, end);
			new_s[i] = split;
			if (split == NULL)
			{
				free(new_s[i]);
				new_s[i] = NULL;
				return (new_s);
			}
			i++;
			start = end + 1;
		}
		end++;
	}
	return (new_s);
}

char	*ft_make_split(char const *s, int start, int end)
{
	int		i;
	int		malloc_len;
	char	*split;

	malloc_len = (end - start) + 1;
	split = (char *)malloc(malloc_len * sizeof(char) + 1);
	if (split == NULL)
		return (NULL);
	i = 0;
	while (start <= end)
	{
		split[i] = s[start];
		i++;
		start++;
	}
	split[i] = '\0';
	return (split);
}
