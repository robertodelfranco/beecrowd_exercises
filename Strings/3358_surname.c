#include <stdio.h>

int	ft_strchr(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	if (str[i] == c)
		return (1);
	return (0);
}

int main()
{
	int n, i, j, c, not_easy;
	char	surname[43];

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%s", surname);
		j = 0;
		c = 0;
		not_easy = 0;
		while (surname[j] != '\0')
		{
			if (!ft_strchr("aeiouAEIOU", surname[j]))
				c += 1;
			else
				c = 0;
			if (c == 3)
				not_easy = 1;
			j++;
		}
		if (not_easy)
			printf("%s nao eh facil\n", surname);
		else
			printf("%s eh facil\n", surname);
	}
}