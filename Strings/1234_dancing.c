#include <stdio.h>

int main()
{ 
	char	str[51];

	while(scanf("%[^\n]%*c", str) != EOF)
	{
		int i = 0;
		int j = 0;
		while(str[i] != '\0')
		{
			if (j % 2 == 0)
			{
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] -= 32;
			}
			else
			{
				if (str[i] >= 'A' && str[i] <= 'Z')
					str[i] += 32;
			}
			if (str[i] != 32)
				j++;
			i++;
		}
		printf("%s\n", str);
	}
}
